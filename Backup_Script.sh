#!/bin/bash

#Gavin Lyons 19-05-16 
#Backup script backs up files to remote directory
#1: Make sure destination  is mounted
#2: Run as root



echo -e  "\e[42m******************************\e[0m"
echo -e  "\e[42m*Written By Gavin Lyons      *\e[0m"
echo -e  "\e[42m*Verision 3 21-06-16         *\e[0m"
echo -e  "\e[42m*Backup script Backup_3.sh   *\e[0m"
echo -e  "\e[42m******************************\e[0m"
echo " "

#Check that user ran as sudo
if (( $EUID != 0 )); then
    echo -e "\e[41mPlease run as root\e[0m"
    exit
fi

#get user input for which path for backup
Dest1="/run/media/gavin/Linux_backup"
Dest2="/run/media/gavin/iomeaga_320"
echo -e  "\e[44mPick destination directory for backup :--  \e[0m"
echo "(1)   "  "$Dest1"
echo "(2)   "  "$Dest2"
echo "(3)    Specify a path" 
echo "(4)    exit"
echo ""
echo "Press option followed by [ENTER]"
echo ""
read -r choice
#check that paths exist and chang path to dest
case "$choice" in

1)  echo $Dest1
    if  [ -d $Dest1 ] 
    then
      cd $Dest1
    else
	  echo  -e "\e[91mPath not found to destination directory\e[0m"
	  echo  -e "\e[91mNOTE : The Hard drives  internal and external must be mounted\e[0m"
          echo ""
          exit
    fi
    ;;

2)  echo  $Dest2
    if  [ -d $Dest2 ] 
    then
      cd $Dest2
    else
	  echo  -e "\e[91mPath not found to destination directory\e[0m"
	  echo  -e "\e[91mNOTE : The Hard drives  internal and external must be mounted\e[0m"
          echo ""
          exit
    fi
    
    ;;
3)  echo -e "\e[44mType a custom destination path\e[0m"
    read -r Path1
    if  [ -d $Path1 ] 
    then
      echo "$Path1"
      cd $Path1
    else
	  echo  -e "\e[91mPath not found to destination directory\e[0m"
          echo ""
          exit
    fi
    ;;

*) echo "exit"
    exit
   ;;
esac

#make the backup directory
TODAYSBACKUPDATE=`date +%d-%b-%Y`
mkdir $TODAYSBACKUPDATE
cd $TODAYSBACKUPDATE
echo "Backup Directory made at " "$TODAYSBACKUPDATE" at "backup path"
echo ""

#begin the backup
echo -e "\e[30;48;5;10m1 Make copy of first 512 bytes MBR with dd\e[0m"
dd if=/dev/sdb1 of=hda-mbr.bin bs=512 count=1
echo -e "\e[1;10mDone.\e[0m"
echo ""

echo -e "\e[30;48;5;10m2 Make a copy of etc dir\e[0m"
cp -a  -u /etc .
echo -e "\e[1;10mDone.\e[0m"
echo ""

echo -e "\e[30;48;5;10m3 Make a copy of home dir\e[0m"
cp -a  -u /home .
echo -e "\e[1;10mDone.\e[0m"
echo ""
sync


echo -e "\e[30;48;5;10m4 Make tarball of all except tmp dev proc sys run\e[0m"
tar --one-file-system --exclude=/tmp/* --exclude=/dev/* --exclude=/proc/* --exclude=/sys/* --exclude=/run/* -pzcf RootFS_backup.tar.gz /
echo -e "\e[1;10mDone.\e[0m"
echo ""
sync

echo -e "\e[30;48;5;10m5 Make copy of package lists\e[0m"
echo -e "TO-DO"
echo -e "\e[1;10mDone.\e[0m"
echo ""



