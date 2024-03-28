#!/bin/bash

selectedWord=$(xclip -o)

url="https://translate.google.com/?sl=en&tl=ar&text=$selectedWord&op=translate"

firefox "$url"