from collections import OrderedDict
n = int(input())
d = OrderedDict()
for _ in range(n):
    entry = input().split();
    food = " ".join(entry[:-1]); price = int(entry[-1]);
    if(food in d): d[food] += price;
    else: d[food] = price

for u in d.keys(): print(u, d[u])
