from collections import OrderedDict
n = int(input())
d = OrderedDict()
for _ in range(n):
    x = input();
    if(x in d.keys()): d[x] += 1;
    else: d[x] = 1;

print(len(d))
for x in d.values():print(x, end = " ");
