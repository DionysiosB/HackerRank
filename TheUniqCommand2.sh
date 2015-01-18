uniq -c | tr -s " " | awk '$1=$1'
