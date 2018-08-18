import numpy as np
n, m, p = map(int, input().split())
a = []
b = []
for _ in range(n): row = list(map(int, input().split())); a.append(row);
for _ in range(m): row = list(map(int, input().split())); b.append(row);
print(np.concatenate((a, b), axis = 0))
