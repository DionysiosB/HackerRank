uniq -ci | tr -s " " | awk '$1=$1'
