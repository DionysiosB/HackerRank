from itertools import groupby
g = groupby(input());
for u in g:
    u = len(list(u[1])), int(u[0])
    print(u, end = " ")
