Bar charts from stdin
=====================

Put this shell script somewhere in your path and run it by feeding it
value/label pairs like this:

	$ bars
	10 one
	20 two
	30 three
	^D

And you'll get something like this:

	10   one ################
	20   two ################################
	30 three #################################################

Value comes first because labels are optional. If you're data is the other
way round, just use `awk` before `bars`:

	$ awk '{ print $2 $1 }' < your_data | bars

Examples
--------

Get a bar chart of word frequencies in a text file:

	$ tr -sc 'A-Za-z' '\012' < textfile | sort | uniq -c | sort -nr | bars

Get a bar chart of file sizes:

	$ du -hk * | bars

Show a chart of total lines per file:

	$ wc -l * | bars

Use another character for the bars:

	$ BARCHAR='*' bars

Pad values to have fixed width:

	$ VMAX=8 bars
