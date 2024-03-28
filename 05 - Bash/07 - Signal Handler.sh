#!/bin/bash

#defining a function to handle a signal
HandleSignal()
{
    echo "Signal recieved. Cleaning up and exiting"
    exit 1
}

#trap the specified signal and specify the function to handle it

trap 'HandleSignal' SIGINT SIGTERM #traps interrupt signal and termination signals and executes the 'HandleSignal' function 

while true; do
    echo "Waiting for SIGINT or SIGTERM signals"
    sleep 1
done