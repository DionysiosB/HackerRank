from collections import defaultdict

n, m = map(int, input().split())
d = defaultdict(list);
for k in range(n):
    w = input()
    d[w].append(k + 1)

for k in range(m):
    w = input()
    if(w in d):
        l = d[w]
        for u in l : print(u, end = " ");
    else: print("-1", end = " ")
    print("")
