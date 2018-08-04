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
#!/bin/bash

clear
spinner=( Ooooo oOooo ooOoo oooOo ooooO oooOo ooOoo oOooo);

cat << EOF
Hello.
Thank you for trying this script out.
I will now wait 10 seconds,
but you will see a "spinner"
as a visual for the user.
EOF


count(){
# run function in background   &
spin &
  pid=$!

  for i in `seq 1 10`
  do
    sleep 1;
  done

  kill $pid  
}

spin(){
  while [ 1 ]
  do 
    for i in ${spinner[@]}; 
    do 
		# \r reset line       
		echo -ne "\r$i";
      sleep 0.2;
    done;
  done
}

count

Hello_World_Func
#====================== END ==============================
