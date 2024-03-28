#!/bin/bash

#declaring a dictionary that stores the key:value pairs of colors with their code 

declare -A colors=(
    [Red]="\e[31m"
    [Green]="\e[32m"
    [Yellow]="\e[33m"
    [Blue]="\e[34m"
    [Magenta]="\e[35m"
    [Cyan]="\e[36m"
    [White]="\e[37m"
    [BOLD]="\e[1m"
    [ITALIC]="\e[3m"
    [UNDERLINE]="\e[4m"
    [RESET]="\e[0m"
)
#creating an array of strings with the color names for the rofi dmenu
color_menu=("Red" "Green" "Yellow" "Blue" "Magenta" "Cyan" "White" "BOLD" "ITALIC" "UNDERLINE" "RESET")

#showing the rofi with the color names and storing the selected color in a variable
selected_color=$(printf "%s\n" "${color_menu[@]}" | rofi -dmenu -p "Select a color")

#after having selected a color we use the xdotool command to make it write the code of that color on screen

xdotool type -delay 10 "${colors[$selected_color]}"