#!/bin/bash
# global d variable
d="i am global"

# User defined function
function create_jail
{
   # d is only visible to this function
   #a="i am local"
  local a="i am local"
   echo "inside L function $a"  
   echo "inside G function $d"
}

echo "before G function $d"

create_jail 

echo "after L function $a"
echo "after G function $d"
