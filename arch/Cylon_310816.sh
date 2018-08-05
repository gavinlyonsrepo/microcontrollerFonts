#!/bin/bash
#Opening help menu
echo -e "\e[40;38;5;82m*********************************\e[0m"
echo -e "\e[40;38;5;82m*Gavin Lyons 25-06-16 Cylon.sh  *\e[0m"
echo -e "\e[40;38;5;82m*Arch Linux distro  Bash script *\e[0m"
echo -e "\e[40;38;5;82m*update system offical and      *\e[0m"
echo -e "\e[40;38;5;82m*AUR repo using pacman  & cower,*\e[0m"
echo -e "\e[40;38;5;82m*check for broken symlinks,     *\e[0m"
echo -e "\e[40;38;5;82m*log errors and failed systemd  *\e[0m"
echo -e "\e[40;38;5;82m*services, ClamAv anti virus    *\e[0m"
echo -e "\e[40;38;5;82m*system Backup with tar         *\e[0m"
echo -e "\e[40;38;5;82m*Clean System with Bleachbit    *\e[0m"
echo -e "\e[40;38;5;82m*********************************\e[0m"
#path for my internal hard drive backup
Dest1="/run/media/gavin/Linux_backup"
#path for my external hard drive backup
Dest2="/run/media/gavin/iomeaga_320"
#set logfilepath + cower updates 
Dest3="/home/gavin/Documents/Tech/Linux/MyLinux/"
#check logfile path
 if  [ -d $Dest3 ] 
    then
       echo ""
    else
	      echo ""
	      echo  -e "\e[91mPath not found to destination directory for log files and downloads\e[0m"
		  echo  -e "\e[91m""$Dest3""\e[0m"
          echo ""
    fi
    
while true; do
    cd ~
	echo -e  "\e[44mPick an option from list please :-\e[0m"
	echo "(1)     Get updates with Packman"
	echo "(2)     Get updates from AUR with cower"
	echo "(3)     Pacman maintence"  
	echo "(4)     System maintence check"
	echo "(5)     ClamAv anti-virus check"
	echo "(6)     System backup"
	echo "(7) 	Empty Trash and Downloads folder"
	echo "(8) 	Delete Firefox histroy"
    echo "(9) 	System Clean by Bleachbit"
	echo "(0) 	Exit" 
    echo ""
    echo "Press option number followed by [ENTER]"
    echo ""
    read -r choice
    case "$choice" in
		1)  echo ""
			#pacman
			echo -e "\e[30;48;5;10m***** Update Pacman *****\e[0m"
			echo ""
			sudo pacman -Syu
			echo ""
			echo -e "\e[1;10mDone.\e[0m"    
			echo ""
		;;
		2) echo ""
				#cower AUR
				cd "$Dest3"
				TODAYSBACKUPDATE=`date +%d-%b-%Y`
				mkdir $TODAYSBACKUPDATE
				cd $TODAYSBACKUPDATE
				echo -e "\e[30;48;5;10m***** Update AUR packages with cower *****\e[0m"
				echo "Directory made at for AUR updates"
				pwd
				echo ""
				cower -vdu
				echo ""
				ls -la
				# look for empty dir (i.e. if no updates) 
				if [ "$(ls -A .)" ] 
				then
					echo -e  "\e[44mCower updates available for package build\e[0m"
					echo -e  "\e[44mDo you wish to build and install  them now?\e[0m"
					echo ""
					echo "1) Yes"
					echo "2) No"
					echo ""
					echo "Press option number followed by [ENTER]"
					echo ""
					read choice
					if [ $choice = "1" ]
						then
						echo "Building and installing cower package updates"	
						echo ""	
						#build and install packages
						find . -name PKGBUILD -execdir makepkg -sri \;			
					fi	
				else
					echo ""
					echo " No updates of AUR packages by Cower..."
				fi	
				echo ""
				echo -e "\e[1;10mDone.\e[0m"
				echo ""
		;;
		3) echo ""
			#pacman maintenace
			echo -e "\e[30;48;5;10m***** Pacman Maintenace *****\e[0m"
			echo "Delete orphans"
			sudo pacman -Rns $(pacman -Qtdq)
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			echo "Prune older packages from cache"
			sudo paccache -r
			echo -e "\e[1;10mDone.\e[0m"
			echo "Writing installed package lists to file "
			pwd
			cd "$Dest3"
			sudo pacman -Qqen > packagesQqen
			sudo pacman -Qm > packageQm
			echo -e "\e[1;10mDone.\e[0m"    
			echo ""
		;;
		4) echo ""
			#system maintenace
			
			# -systemd --failed:
			echo -e "\e[30;48;5;10m***** All Failed Systemd Services *****\e[0m"
			systemctl --failed --all
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			echo -e "\e[30;48;5;10m***** All Failed Active Systemd Services *****\e[0m"
			systemctl --failed
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			# -Logfiles:
			echo -e "\e[30;48;5;10m***** Check log Journalctl for Errors *****\e[0m"
			cd "$Dest3"
			echo "Errorfile written to -"
			pwd
			journalctl -p 3 -xb >Journalctlerrlog
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			#check ssd trim ok
			echo -e "\e[30;48;5;10m***** Check Journalctl for fstrim SSD trim *****\e[0m"
			cd "$Dest3"
			echo "SSD trim report written to -"
			pwd
			echo "SSD trim" >> Journalctlerrlog
			journalctl -u fstrim >> Journalctlerrlog
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			# Checking for broken symlinks:
			echo -e "\e[30;48;5;10m***** Checking for Broken Symlinks *****\e[0m"
			cd "$Dest3"
			echo "log.txt written to -"
			pwd
			cd ~
            find . -type l -! -exec test -e {} \; -print > "$Dest3"symlinkerr
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			 
		;;
		5) echo ""
			#Anti-virus clam Av
			# update clamscan virus definitions:
			echo -e "\e[30;48;5;10m***** Updating clamavscan Database *****\e[0m"
			sudo freshclam
			echo""
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			echo -e "\e[30;48;5;10m***** Scanning with Clamav*****\e[0m"
			echo "Do you wish to run anti-virus check with clamAv at this point?"
			echo ""
			echo "1) Yes"
			echo "2) No"
			echo ""
			echo "Press option number and [ENTER]"
			echo ""
			read choice1
			echo "You picked option " $choice1 
			echo "" 
			if [ $choice1 = "1" ]
				then
					# scan entire system
					cd "$Dest3"
					echo "clamavlogfile  at"
					pwd
					sudo clamscan -l clamavlogfile --recursive=yes --infected --exclude-dir='^/sys|^/proc|^/dev|^/lib|^/bin|^/sbin' /
					echo "" 
					echo -e "\e[1;10mDone.\e[0m"			
				else
					echo -e "\e[1;10mDone.\e[0m"
			fi
		;;
		6) echo ""
		   #Check that user ran as sudo
			if (( $EUID != 0 )); then
				echo -e "\e[41mPlease run as root\e[0m"
				exit
			fi
			#get user input for backup
			echo -e  "\e[44mPick destination directory for backup :--  \e[0m"
			echo "(1)   "  "$Dest1"
			echo "(2)   "  "$Dest2"
			echo "(3)   "  "$Dest3"
			echo "(4)    Specify a path" 
			echo "(5)    Exit"
			echo ""
			echo "Press option followed by [ENTER]"
			echo ""
			read -r choice
			#check that paths exist and change path to dest path
			case "$choice" in
			1)  echo "$Dest1"
				if  [ -d $Dest1 ] 
				then
				  cd "$Dest1"
				else
				  echo  -e "\e[91mPath not found to destination directory\e[0m"
				  echo  -e "\e[91mNOTE : The Hard drives  internal and external must be mounted\e[0m"
					  echo ""
					  exit
				fi
			;;
			2)  echo  "$Dest2"
				if  [ -d $Dest2 ] 
				then
				  cd "$Dest2"
				else
				  echo  -e "\e[91mPath not found to destination directory\e[0m"
				  echo  -e "\e[91mNOTE : The Hard drives  internal and external must be mounted\e[0m"
					  echo ""
					  exit
				fi				
			;;
			3)  echo  "$Dest3"
				if  [ -d $Dest3 ] 
				then
				  cd "$Dest3"
				else
				  echo  -e "\e[91mPath not found to destination directory\e[0m"
				  echo  -e "\e[91mNOTE : The Hard drives  internal and external must be mounted\e[0m"
					  echo ""
					  exit
				fi				
			;;			
			4)  echo -e "\e[44mType a custom destination path:-\e[0m"
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
			echo "Backup Directory made at :- "
			pwd
			echo ""

			#begin the backup
			echo -e "\e[30;48;5;10m1 Make copy of first 512 bytes MBR with dd\e[0m"
			dd if=/dev/sdb1 of=hda-mbr.bin bs=512 count=1
			echo -e "\e[1;10mDone.\e[0m"
			echo ""

			echo -e "\e[30;48;5;10m2 Make a copy of etc dir\e[0m"
			cp -a -v -u /etc .
			echo -e "\e[1;10mDone.\e[0m"
			echo ""

			echo -e "\e[30;48;5;10m3 Make a copy of home dir\e[0m"
			cp -a -v -u /home .
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			sync

			echo -e "\e[30;48;5;10m4 Make tarball of all except tmp dev proc sys run\e[0m"
			tar --one-file-system --exclude=/tmp/* --exclude=/dev/* --exclude=/proc/* --exclude=/sys/* --exclude=/run/* -pzcvf RootFS_backup.tar.gz /
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
			sync

			echo -e "\e[30;48;5;10m5 Make copy of package lists\e[0m"
			pacman -Qqen > pkglist.txt
			pacman -Qm > pkglistAUR.txt
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
					  
		;;
		
		7)  echo -e "\e[30;48;5;10m*****Deleting Trash and Downloads folder*****\e[0m"
			rm -rv /home/gavin/.local/share/Trash/files
			rm -rv /home/gavin/Downloads
			mkdir /home/gavin/Downloads
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
		;;
		
		8)  echo -e "\e[30;48;5;10m*****Deleting firefox history*****\e[0m"
			bleachbit --clean firefox.*
			echo -e "\e[1;10mDone.\e[0m"
			echo ""
		;;
		
		9) echo ""
		   #system clean with bleachbit
		   echo -e "\e[30;48;5;10m*****Clean Deep scan*****\e[0m"
		   bleachbit --clean deepscan.*
		   echo -e "\e[1;10mDone.\e[0m"
		   echo ""
		   echo ""
		   
		   echo -e "\e[30;48;5;10m*****Clean Flash*****\e[0m"
		   bleachbit --clean flash.*
		   echo -e "\e[1;10mDone.\e[0m"
		   echo ""
		   echo ""
		   
		   echo -e "\e[30;48;5;10m*****Clean libreoffice.******\e[0m"
		   bleachbit --clean libreoffice.*
		   echo -e "\e[1;10mDone.\e[0m"
		   echo ""
		   echo ""
		   
		   echo -e "\e[30;48;5;10m*****Clean system*****\e[0m"
		   sudo bleachbit --clean system.*
		   echo -e "\e[1;10mDone.\e[0m"
		   echo ""
			
		;;
		
		0) echo "exit"
			exit
		;;
esac

done
