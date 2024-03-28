#!/bin/bash

read -p "Do you know me? " Answer

case $Answer in 
yes | YES)
    echo "okay"
    ;;
no | NO)
    echo "okay brdo"
    ;; #just like the break in C/C++
*)
    echo default case
esac

select value in yes no; do
    case $value in
    yes)
        echo yes from select
        break
        ;;
    no)
        echo no from select
        break
        ;;
    *)  
        echo default from select
        break
    esac
done