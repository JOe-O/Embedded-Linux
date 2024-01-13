#!/bin/bash   

folders="${HOME}/Desktop\n${HOME}/Downloads\n${HOME}/Documents"

select=$(echo -e "${folders}" | rofi -dmenu)

nautilus "$select" &