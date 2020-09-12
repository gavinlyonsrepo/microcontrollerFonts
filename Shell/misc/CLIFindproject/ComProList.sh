#!/bin/bash

#=========================HEADER==========================================

#name: ComProList
#Description: Show programs that do NOT install a desktop entry , i.e CLI like nmon
#Version : 1.0
#License: GPL 
#Written : Bash 

#====================FUNCTIONS===============================


function expInstall_Func
{
	echo "1. Get explictaly  Installed Packages"
	pacman -Qe > /tmp/outputP1.log
	cut -d ' ' -f1  /tmp/outputP1.log >>  /tmp/allprograms.log
	rm outputP1.log
}


function find_Func
{
    echo "2. Find desktop files"
	# usr/share/applications/ 
	# /usr/local/share/applications/ 
	# ~/.local/share/applications/
	# /usr/share/xgreeters/
	# /etc/xdg/autostart/
	#~/.config/autostart/
	
	#find / -name '*.desktop' 2>/dev/null >> CPIoutput.log
	find /usr/share/applications/  -name '*.desktop' 2>/dev/null >> output1.log
	find /usr/local/share/applications/  -name '*.desktop' 2>/dev/null >> output1.log
	find ~/.local/share/applications/ -name '*.desktop' 2>/dev/null >> output1.log
	find /usr/share/xgreeters/ -name '*.desktop' 2>/dev/null >> output1.log
	find /etc/xdg/autostart/ -name '*.desktop' 2>/dev/null >> output1.log
	find ~/.config/autostart/  -name '*.desktop' 2>/dev/null >> output1.log
	
	#  sed 's/find/replace/' file To remove last n characters of every line: 
	sed -r 's/.{8}$//' output1.log >> output2.log
	
	while read -r path; do
		basename "$path" >> Pwithdesktopicons.log 
	done < output2.log
	rm output1.log output2.log
	 
}

function comp_Func
{
	echo "3. Compare installed packages to desktop entry list Output result"
	comm -23 <(sort allprograms.log  ) <(sort Pwithdesktopicons.log) >> outputFinal.log
}

#==================MAIN CODE LOOP====================================
#Delete files from last pass
rm /tmp/Pwithdesktopicons.log
rm /tmp/allprograms.log 
rm /tmp/outputFinal.log

cd /tmp/
expInstall_Func
find_Func
comp_Func

#====================== END ==============================
