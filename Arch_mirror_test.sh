#!/bin/bash

# Customize these parameters {{{
temp_file='/tmp/mirrors.json'
num_mirrors=10

# See https://www.archlinux.org/mirrors/status/ for meaning of these
country='all'      # all, or a name (uses regex matching, so input accordingly)
protocol='all'     # all, http, https, rsync
max_score=100      # lower is better
min_completion=0.9 # as a fraction, 1 is maximum
max_delay=         # a delay value in seconds. Delay in mirroring.
max_latency=       # a value in seconds
max_dev_latency=   # a value in seconds. Std. deviation of latency.
# }}}

# Defaults and Sanitization {{{
[ "$protocol" == 'all' ] && protocol='.*'
[ "$country" == 'all' ] && country='.*'
[ -z "$max_score" ] && max_score=100
[ -z "$min_completion" ] && min_completion=0.9
[ -z "$max_delay" ] && max_delay=86400
[ -z "$max_latency" ] && max_latency=2
[ -z "$max_dev_latency" ] && max_dev_latency=2
# }}}

# Curl and jq pipe {{{
curl https://www.archlinux.org/mirrors/status/json/ |\
    jq ".urls |
        sort_by(.score) |
        .[] |
        select(.country | test(\"$country\")) |
        select(.protocol | test(\"$protocol\")) |
        select(.score != null) |
        select(.score < $max_score) |
        select(.completion_pct > $min_completion) |
        select(.delay < $max_delay) |
        select(.duration_avg < $max_latency ) |
        select(.duration_stddev < $max_dev_latency) |
        { protocol: .protocol, url: .url, country: .country, score: .score }" \
    > "$temp_file"
# }}}

# Extract info to variables {{{
urls=( $(jq -r '.url' "$temp_file") )
scores=( $(jq '.score' "$temp_file") )
# Bash >= 4.0
if (( BASH_VERSINFO >= 4 )); then
    readarray -t countries <<<"$(jq '.country' "$temp_file")"
else
    IFS=$'\n' read -rd '' -a countries <<<"$(jq '.country' "$temp_file")"
fi
count=${#urls[@]}
# }}}

# Write to file {{{
printf '## Generated using hashhars mirrorlist-gen script\n'
printf '## Generated on %s\n' "$(date --rfc-3339=date)"
printf '## Number of mirrors: %s; Country: %s; Protocol: %s; Max Score: %s\n' \
    "$num_mirrors" "$country" "$protocol" "$max_score"
printf '## Min completion percentage: %s; Max mirror delay: %s;\n' \
    "$min_completion" "$max_delay"
printf '## Max avg connection latency: %s; Max std dev of latency: %s\n' \
    "$max_latency" "$max_dev_latency"
printf '\n'
for (( i=0; i < count && i < num_mirrors; ++i )); do
    printf '# %s, Score = %s\nServer = %s$repo/os/$arch\n' \
        "${countries[$i]}" "${scores[$i]}" "${urls[$i]}"
done
# }}}

# vim: et sw=4 tw=80 cc=80 fdm=marker
