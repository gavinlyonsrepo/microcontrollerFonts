



#!/bin/bash
# using kdialog to create a menu
temp=$(mktemp -t temp.XXXXXX)
temp2=$(mktemp -t temp2.XXXXXX)
function diskspace {
df -k > $temp
kdialog --textbox $temp 1000 10
}
function whoseon {
who > $temp
kdialog --textbox $temp 500 10
}
function memusage {
cat /proc/meminfo > $temp
kdialog --textbox $temp 300 500
}
while [ 1 ]
do
kdialog --menu "Sys Admin Menu" "1" "Display diskspace" "2" "Display
users" "3" "Display memory usage" "0" "Exit" > $temp2
if [ $? -eq 1 ]
then
break
fi
selection=$(cat $temp2)
case $selection in
1)
diskspace ;;
2)
whoseon ;;
3)
memusage ;;
0)
break ;;
*)
kdialog --msgbox "Sorry, invalid selection"
esac
done


