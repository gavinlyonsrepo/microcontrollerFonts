#!/bin/bash

#=========================HEADER==========================================

#name: template
#Title :
#Description:
#Version :
#License:
#Written :


#=======================GLOBAL VARIABLES SETUP=============================



LIBPATH="/usr/lib/bashmultitool/"
for MYFILE in "$LIBPATH"*;
do
	source "$MYFILE"
done


#====================FUNCTIONS===============================
#FUNCTION HEADER
# NAME :
# DESCRIPTION :
# INPUTS :
# PROCESS :
# OUTPUT :
# NOTES:
function Hello_World_Func
{
	bmtMiscFunc startWatch
echo ""
echo ""
echo ""
bmtPromptFunc line "=" red
bmtPrintFunc green "hello world"
bmtPromptFunc line "=" red

bmtPromptFunc anykey "test"

bmtPromptFunc anykey "test" green

bmtLinuxFunc checkpac "cylondeb"  2
bmtLinuxFunc checkpac "cylondeb"  2  "MES"

	# distrocheck
	echo " "
	echo "my distro is :-"
	bmtLinuxFunc distrocheck
	echo "$?"

	echo "What do you want to do?"
	echo "[y/n/q] :-"
	bmtPromptFunc yesnoquit 
	echo "$?"
	

bmtMiscFunc checknet "www.google.ie"

bmtPrintFunc red "red text"
bmtPrintFunc b_red "red bold text"
bmtPrintFunc bg_red "red background text"
bmtPrintFunc u_red "red underline text"
bmtPrintFunc i_red "red bright text"
echo ""
echo ""
echo ""
bmtLinuxFunc log "WARNING" "overflow"  mylog /tmp/
bmtLinuxFunc log "WARNING" "overflow"  mylog /tmp/
bmtLinuxFunc log "WARNING" "overflow"  mylog /tmp/
bmtLinuxFunc log "WARNING" "overflow"  mylog /tmp/

bmtMiscFunc stopWatch
}

#==================MAIN CODE====================================
Hello_World_Func
#====================== END ==============================
