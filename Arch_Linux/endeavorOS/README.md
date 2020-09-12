Convert EndeavourOS Linux to Arch Linux 04-2020
This was used on offline XFCE EndeavourOS edition
-----------

1. Stage 1, Edit grub. 
2. Stage 2, Delete the Endeavour packages
3. Stage 3, Edit pacman.conf
4. Stage 4, Delete pacman hooks
5. Stage 5, Delete the sync database
6. Stage 6, Edit mirrorlist files
7. Stage 7, Edit release files.
8. Stage 8, Edit LightDm settings
9. Stage 9, Edit XFCE whisker menu 

Stage One, Grub.
------------

* Edit. /etc/default/grub file


* Change.

GRUB_DISTRIBUTOR="EndeavourOS"
to
GRUB_DISTRIBUTOR="Arch"

* Comment out.

GRUB_THEME=/boot/grub/themes/EndeavourOS/theme.txt

* Update the Grub.

sudo grub-mkconfig -o /boot/grub/grub.cfg

Stage 2, Delete the Endeavour packages
-----------------

* Make a backup. Of all Endeavour packages(FYI)
pacman -Sl endeavouros | grep '\[installed' > ~/Desktop/Work/backup

On my system 
```sh
endeavouros arc-x-icons-theme 2.1-3 [installed]
endeavouros downgrade 6.2.5-1 [installed]
endeavouros endeavouros-keyring 1-4 [installed]
endeavouros endeavouros-mirrorlist 2-1 [installed]
endeavouros endeavouros-theming 5-1 [installed]
endeavouros endeavouros-xfce4-terminal-colors 1-1 [installed]
endeavouros eos-update-notifier 1.0.7-1 [installed]
endeavouros grub-tools 1.2-1 [installed]
endeavouros grub2-theme-endeavouros 20190711-4 [installed]
endeavouros mkinitcpio-openswap 0.1.0-3 [installed]
endeavouros paper-icon-theme 1.5.0-2 [installed]
endeavouros reflector-simple 1.3.3-1 [installed]
endeavouros welcome 2.4.42-1 [installed]
endeavouros yay 9.4.6-2 [installed]
```

* Install and/or select New themes and icons themes at this point to  prevent any potential issues from missing themes (optional)

* Delete the packages.

pacman -Sl endeavouros | grep '\[installed' | cut -d' ' -f2 | xargs -o sudo pacman -R


Stage 3, Edit pacman.conf
----------------------

Removed the [endeavouros] section from /etc/pacman.conf


Stage 4, Delete pacman hooks
----------------

* Removed the two EOS-specific branding hooks in /etc/pacman.d/hooks

sudo rm lsb-release.hook os-release.hook 


Stage 5, Delete the sync database
-----------------

rm /var/lib/pacman/sync/endeavouros.db

Stage 6, mirrorlist files
------------------

* At etc/pacman.d , Remove the endeavour mirrorlist and replace with new mirrorlist(download new mirrolist and edit 
As per arch wiki) or simply rename.

Stage 7, Edit release files.
-----------------------
 
* change "endeavouros" to "arch"  in files 2.

1. /etc/lsb-release    , delete
2. /usr/lib/os-release    ,  edit 


Stage 8, LightDm 
------------------------------

* LightDM GTK+ greeter settings tool remove "text=endeavourOS" in Panel tab.
 
* In /etc/lightDM/lightdm-gtk-greeter.conf , change background setting

Stage 9 , XFCE Whiskermenu
-------------------------
* Edit /etc/skel/.config/xfce4/panel/whiskermenu-1.rc to remove referneces to endeavourOs
