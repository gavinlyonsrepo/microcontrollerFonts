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
function replacestringinmultifiles
{
	find ./ -type f -exec sed -i 's/string1/string2/g' {} \;
}

#==================MAIN CODE====================================
Hello_World_Func
#====================== END ==============================
