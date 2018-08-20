awk '{average=($2+$3+$4)/3; print $0, ":", (average>=80)? "A" : (average>=60)? "B" : (average>=50)? "C" : "FAIL"}'
