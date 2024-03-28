#!/bin/bash
# set -x
usage(){

    echo "Usage: $0 [-s <45|90>] [-p <string>]" 1>&2
    exit 1

}


while getopts "s:p:t" option; do
    case "${option}" in
        s)
            args=${OPTARG}
            ((args == 45 || args == 90)) || usage
            echo "$args"
            ;;
        p)
            argss=${OPTARG}
            echo "$argss"
            ;;
        t)
            echo "t is passed"
            ;;
        *)
            usage
            ;;
    esac

done
echo $OPTIND
echo before shifting "$1" "$2" "$3" "$4" "$5" 
shift $((OPTIND - 1)) #
echo after shifting "$1" "$2" "$3" "$4" "$5" 