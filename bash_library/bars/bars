#!/usr/bin/env bash

# Generate a bar chart by reading value/label pairs from stdin
bars() {
	local VALUES=() LABELS=()
	local EOL=${EOL:-$'\n'} MAX=${BARMAX:-0} VMAX=${VMAX:-0} LMAX=${LMAX:-0}
	local N=0 V L LN

	while read -r V L
	do
		(( V > MAX )) && MAX=$V

		VALUES[$N]=$V
		LABELS[$N]=$L
		(( ++N ))

		LN=${#L}
		(( LN > LMAX )) && LMAX=$LN

		LN=${#V}
		(( LN > VMAX )) && VMAX=$LN
	done

	local COUNT=$N COLUMNS=${COLUMNS:-$(tput cols)}
	local HC=$(( COLUMNS/2 ))
	(( LMAX > HC )) && LMAX=$(( HC ))

	local BARCHAR=${BARCHAR:-#}
	local BMAX=$(( COLUMNS-LMAX-VMAX-1 ))
	local BAR='' LSPACE=''

	if (( LMAX > 0 ))
	then
		(( --BMAX ))
		LSPACE=' '
	fi

	while (( ${#BAR} < BMAX ))
	do
		BAR=$BAR${BAR:-$BARCHAR}
	done

	local F=$(( (MAX<<16)/BMAX ))
	(( F < 1 )) && F=1

	for (( N = 0; N < COUNT; ++N ))
	do
		L=${LABELS[$N]}
		(( ${#L} > LMAX )) && L='...'${L:$(( ${#L}-LMAX+3 ))}

		printf "%${VMAX}d %${LMAX}s%s%s$EOL" \
			"${VALUES[$N]}" \
			"$L" \
			"$LSPACE" \
			"${BAR:0:$(( (${VALUES[$N]}<<16)/F ))}"
	done
}

if [ "${BASH_SOURCE[0]}" == "$0" ]
then
	bars
fi
