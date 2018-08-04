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
	echo "hello World"
}

# Usage: elementInList <ELEMENT> <LIST OF ELEMENTS>
# Checks if element is contained in the list
# Needed:
# - BASH functions
#  - fatal
function elementInList {
    if [[ ${#} -lt 2 ]] ; then
        fatal "${FUNCNAME} <ELEMENT> <LIST OF ELEMENTS>"
        return
    fi

    local -r ELEMENT=${1}; shift

    local thisElement

    while [[ ${#} -gt 0 ]] ; do
        thisElement=${1}; shift
        if [[ ${thisElement} == ${ELEMENT} ]] ; then
            return 0
        fi
    done
    return 1
}
#==================MAIN CODE====================================
Hello_World_Func
#====================== END ==============================
