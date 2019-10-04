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
	echo " checking installed kernels ..."
        local {installed_kernels,available_kernels,eol_kernels}                                                                                         # declare local variables
        installed_kernels=$( for p in $( command ls -1 /boot | grep -E '^vmlinuz' ) ; do pacman -Qqo /boot/$p ; done | sort -u )                        # filter installed kernels from boot sector and determine, which package owns that file. this yields the package name of all installed kernels (including kernels from the AUR).
        available_kernels=$( for p in $( echo "$installed_kernels" ) ; do pacman -Ssq "^$p$" ; done | sort -u )                                         # Check if installed kernels available in repositories and forward it to available_kernels variable.
       echo "$installed_kernels"
       echo "$available_kernels"
        eol_kernels=$( comm -13 <(echo "$available_kernels") <(echo "$installed_kernels") )                                                             # filter kernels to $eol_kernels variable, which are installed but no longer available.
        # print warning message, if end-of-life kernel(s) are found:
        if [[ -n "$eol_kernels" ]]
        then
            echo
            echo -e " \e[41m The following Linux kernel(s) are no longer available in your repositories. \e[0m"
            echo -e " \e[1m Do not expect any security or stability fixes for the(se) kernel(s) anymore. \e[0m"
            echo -e " \e[1m Kernel modules are likely to break. It is recommended to remove the kernel(s).\e[0m"
            echo -e " \e[1m If one or more of the following kernel(s) are taken from AUR, you may safely ignore this warning. \e[0m"
            echo "$eol_kernels"
fi
}

#==================MAIN CODE====================================
Hello_World_Func
#====================== END ==============================
