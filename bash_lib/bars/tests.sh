#!/usr/bin/env bash

test_single_line() {
	for (( N = 0; N <= RANGE; ++N ))
	do
		echo "$N" | BARMAX=$RANGE ./bars
	done
}

test_multi_line() {
	for (( N = 0; N <= RANGE; ++N ))
	do
		echo "$N"
	done | BARMAX=$RANGE ./bars
}

test_multi_line_alt_char() {
	BARCHAR='=' test_multi_line
}

test_custom_width() {
	COLUMNS=60 test_multi_line
}

test_progress_bar() {
	for (( MAX=100, N = 0; N <= MAX; N += 5 ))
	do
		echo "$N" '%' | VMAX=3 BARMAX=$MAX EOL=$'\r' ./bars
		sleep 1
	done
	echo
}

test_long_labels() {
	du -hk "$(cd "${0%/*}" && echo "${PWD%/*}")"/* | ./bars
}

test_with_total() {
	wc -l "${0%/*}"/* | ./bars
}

test_word_frequency() {
	tr -sc 'A-Za-z' '\012' < "$0" | sort | uniq -c | sort -nr | ./bars
}

readonly RANGE=${RANGE:-20}

if (( $# > 0 ))
then
	for TEST in "$@"
	do
		$TEST
	done
else
	grep '^test_' "$0" | while read -r TEST
	do
		TEST=${TEST%%(*}
		$TEST
	done
fi
