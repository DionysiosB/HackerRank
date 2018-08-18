from collections import deque
n = int(input())
d = deque();
for _ in range(n):
    a = input().split();
    if(a[0] == "append"): d.append(a[1]);
    elif(a[0] == "pop"): d.pop();
    elif(a[0] == "appendleft"): d.appendleft(a[1]);
    elif(a[0] == "popleft"): d.popleft();


for x in d: print(x, end = " ");
