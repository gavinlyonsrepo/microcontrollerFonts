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
# NAME : 
# DESCRIPTION :   
# INPUTS : 
# PROCESS :
# OUTPUT :
# NOTES:    
function Hello_World_Func
{

#rm /home/gavin/Desktop/TEST/outx3.txt

notify-send  "Cylon" \
"Pacman updates ready = $(checkupdates| wc -l)                                \
AUR updates ready = $(pacaur -k | wc -l)" --icon=dialog-information

}
#==================MAIN CODE====================================
Hello_World_Func
#====================== END ==============================
