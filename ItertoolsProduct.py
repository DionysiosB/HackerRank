from itertools import product
a = list(map(int, input().split()))
b = list(map(int, input().split()))
for p in sorted(product(a, b)): print(p, end = " ");
