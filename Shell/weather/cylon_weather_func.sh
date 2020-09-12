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
#FUNCTION HEADER
# NAME :  WeatherFunc
# DESCRIPTION:3 day weather forecast
function WeatherFunc
{
   # echo "3 day weather forecast by WTTR.IN"
#	echo "Type a City name, airport code, domain name or area code:-"
	#local mycityVar=""
	#read -r mycityVar
	curl wttr.in/"cork"
}

#==================MAIN CODE====================================
WeatherFunc
#====================== END ==============================
