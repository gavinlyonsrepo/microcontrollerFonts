#! /bin/env bash

#=========================HEADER==========================================

#name: template
#Title : 
#Description: 
#Version :
#License: 
#Written :


#=======================GLOBAL VARIABLES SETUP=============================

deltaX=(-1  0 1 0 )
deltaY=( 0 -1 0 1 )


#====================FUNCTIONS===============================
#FUNCTION HEADER
# NAME : 
# DESCRIPTION :   
# INPUTS : 
# PROCESS :
# OUTPUT :
# NOTES:    
function maze_Func
{



push() {
    # Remember the current location.
    xStack+=($xLoc)
    yStack+=($yLoc)
}

pop(){
    # Get the last location we saved anf make it the current location
    xLoc=${xStack["${#xStack[@]}-1"]}
    yLoc=${yStack["${#yStack[@]}-1"]}
    unset 'xStack[${#xStack[@]}-1]'
    unset 'yStack[${#yStack[@]}-1]'
}

makeHole() {
    #Turn a wall into a path at out current location
    theMap[yLoc*width+xLoc]=' '
}

getDirs(){
    # Find out how many directions we can go from here without creating loops.
    dirs=()
    for ((i=0; i<4 ; i++)); do
	xTry=$(( xLoc + 2*${deltaX[i]} ))
	yTry=$(( yLoc + 2*${deltaY[i]} ))
	if ((xTry > 0)) && ((xTry < width)) && ((yTry > 0)) && ((yTry<height)); then
	    if [[ ${theMap[yTry*width+xTry]} = '#' ]]; then
		dirs+=($i)
	    fi
	fi
    done
    # If there are more than one direction we can choose, remember this location for later
    # when we get stuck, we unwind the stack.  When the stack is empty, we are done
    if (( ${#dirs[@]}>1 )); then
	push
    fi
}

width=41
height=21

theMap=()
xStack=()
yStack=()

for ((y=0; y<height; y++)); do
    for ((x=0; x<width; x++)); do
	theMap[y*width+x]='#'
    done
done

xLoc=1
yLoc=1

makeHole
getDirs
while (( ${#xStack[@]} > 0 )); do
    if (( ${#dirs[@]}>0 )); then
	dir=${dirs[(($RANDOM%${#dirs[@]}))]}
	(( xLoc+=${deltaX[dir]} ))
	(( yLoc+=${deltaY[dir]} ))
	makeHole
	(( xLoc+=${deltaX[dir]} ))
	(( yLoc+=${deltaY[dir]} ))
	makeHole
    else
	pop
    fi
    getDirs
done

# make an enterance and an exit
xLoc=$(( RANDOM%width/2 ))
xLoc=$(( xLoc*2+1 ))
yLoc=0
makeHole
xLoc=$(( RANDOM%width/2 ))
xLoc=$(( xLoc*2+1 ))
yLoc=$(( height-1 ))
makeHole

# Print the maze.
for ((y=0; y<height; y++)); do
    printf "\n" 
    for ((x=0; x<width; x++)); do
	printf "%s" "${theMap[y*width+x]}"
	printf "%s" "${theMap[y*width+x]}"
    done
    printf "\n" 
    for ((x=0; x<width; x++)); do
	printf "%s" "${theMap[y*width+x]}"
	printf "%s" "${theMap[y*width+x]}"
    done
done
printf "\n"
}

#==================MAIN CODE====================================
maze_Func
#====================== END ==============================
