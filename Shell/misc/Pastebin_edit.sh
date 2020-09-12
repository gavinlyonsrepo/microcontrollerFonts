#!/bin/bash

#=========================HEADER==========================================

#name: template
#Title : 
#Description: 
#Version :
#License: 
#Written :


#=======================GLOBAL VARIABLES SETUP=============================



#====================FUNCTIONS===============================
#FUNCTION HEADER
# NAME : Pastebin_Edit
# DESCRIPTION :   Fixing Scripts line endings from data downloaded from  Pastebin 
# NOTES: 
function Pastebin_Edit
{
	echo "start"
	# wget "https://pastebin.com/raw/r65VU9UK" -qO-|dos2unix >  script.sh
	wget "https://pastebin.com/raw/pWXfAZq5"  -qO-| dos2unix > myscript2.sh
	echo "end"
}

#==================MAIN CODE====================================
Pastebin_Edit
#====================== END ==============================
