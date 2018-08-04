#!/bin/bash
#statusVar=""
#for i in $(pacman -Qmq); 
#do
    #statusVar=$(cower -i "$i")
    #if [ "$statusVar" == "" ]; then
        #echo "$i"
    #fi
#done

#!/bin/bash
#for p in $(pacman -Qmq); do
#    if [ -z "$(cower -i $p)" ]; then
#        echo $p
#    fi
#done
for p in $(pacman -Qmq); do
    if [ -z "$(pacaur -i $p)" ]; then
        echo $p
    fi
done
