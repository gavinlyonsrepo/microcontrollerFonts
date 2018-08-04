#!/bin/bash

#Gavin Lyons 23-06-16
#Arch Linux distro update script
#update system offical and AUR repo using pacman and cower
#check for broken symlinks, log errors and failed systemd services
#and run anti virus check clam and update the database.
echo -e "\e[40;38;5;82m*********************************\e[0m"
echo -e "\e[40;38;5;82m*Gav Lyons 23-06-16 updatman.sh *\e[0m"
echo -e "\e[40;38;5;82m*Arch Linux distro update script*\e[0m"
echo -e "\e[40;38;5;82m*update system offical and      *\e[0m"
echo -e "\e[40;38;5;82m*AUR repo using cower and pacman*\e[0m"
echo -e "\e[40;38;5;82m*check for broken symlinks,     *\e[0m"
echo -e "\e[40;38;5;82m*log errors and failed systemd  *\e[0m"
echo -e "\e[40;38;5;82m*services and anti virus check  *\e[0m"
echo -e "\e[40;38;5;82m*********************************\e[0m"
echo ""

#pacman
cd ~
echo -e "\e[30;48;5;10m***** UPDATE PACMAN *****\e[0m"
echo ""
sudo pacman -Syu
echo ""
echo "Delete orphans"
sudo pacman -Rns $(pacman -Qtdq)
echo ""
echo "Prune older packages from cache"
sudo paccache -r
echo "Writing installed package lists to file "
sudo pacman -Qqen > /home/gavin/Documents/Tech/Linux/MyLinux/packagesQqen.txt
sudo pacman -Qm > /home/gavin/Documents/Tech/Linux/MyLinux/packageQm.txt
echo -e "\e[1;10mDone.\e[0m"    
echo ""

#cower AUR
cd /home/gavin/Downloads
TODAYSBACKUPDATE=`date +%d-%b-%Y`
mkdir $TODAYSBACKUPDATE
cd $TODAYSBACKUPDATE
echo -e "\e[30;48;5;10m***** UPDATE COWER PACKAGES *****\e[0m"
echo "Directory $TODAYSBACKUPDATE made at /home/gavin/Downloads for cower updates"
echo ""
cower -vdu
echo ""
ls -la
# look for empty dir (if no updates) 
if [ "$(ls -A .)" ] 
then
     	echo -e  "\e[44mCower updates available for package build\e[0m"
     	echo -e  "\e[44mDo you wish to build and install  them now?\e[0m"
      	echo ""
	echo "Pick Option"
	echo "1) Yes"
	echo "2) No"
	echo ""
	echo "Press 1 or 2 followed by [ENTER]"
	echo ""
	read choice
    if [ $choice = "1" ]
	    then
		echo "Building and installing cower package updates"	
		echo ""	
		#build and install packages
        find . -name PKGBUILD -execdir makepkg -si \;			
	fi	
else
    echo ""
	echo " No updates of AUR packages by Cower..."
fi	
echo ""
echo -e "\e[1;10mDone.\e[0m"
echo ""

# -systemd --failed:
echo -e "\e[30;48;5;10m***** ALL FAILED SYSTEMD SERVICES *****\e[0m"
systemctl --failed --all
echo ""
echo -e "\e[30;48;5;10m***** FAILED ACTIVE SYSTEMD SERVICES *****\e[0m"
systemctl --failed
echo ""
# -Logfiles:
echo -e "\e[30;48;5;10m***** LOGFILES *****\e[0m"
cd /home/gavin/Documents/Tech/Linux/MyLinux
journalctl -p 3 -xb >errorfile
echo -e "\e[1;10mDone.\e[0m"
echo ""
# Checking for broken symlinks:
echo -e "\e[30;48;5;10m***** CHECKING FOR BROKEN SYMLINKS *****\e[0m"
cd ~
find . -type l -! -exec test -e {} \; -print > /home/gavin/Documents/Tech/Linux/MyLinux/log.txt
echo -e "\e[1;10mDone.\e[0m"
echo ""

#Anti-virus clam Av
# update clamscan virus definitions:
echo -e "\e[30;48;5;10m***** UPDATING CLAMAVSCAN DATABASE *****\e[0m"
sudo freshclam
echo""
echo -e "\e[30;48;5;10m***** SCANNING / RECURSIVELY WITH CLAMAV*****\e[0m"
echo "Do you wish to run anti-virus check with clamAv at this point?"
echo ""
echo "Pick Option"
echo "1) Yes"
echo "2) No"
echo ""
echo "Press 1 or 2 followed by [ENTER]"
echo ""
read choice1
echo "You picked option " $choice1 
echo "" 
if [ $choice1 = "1" ]
	then
		# scan entire system
		
		sudo clamscan --recursive=yes --infected --exclude-dir='^/sys|^/proc|^/dev|^/lib|^/bin|^/sbin' /
		echo "" 
		echo -e "\e[1;10mDone.\e[0m"
			
	else
		echo -e "\e[1;10mDone.\e[0m"
		exit
fi



     




