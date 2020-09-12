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

#==================MAIN CODE====================================
for year in {2000..2050}
do
  num=$(cal $year|awk '{print $6 " " $13 " " $20}'|tr ' ' '\n'|grep -c 13)
  echo "$year has $num Friday the 13th's"
done
 

Hello_World_Func
#====================== END ==============================
