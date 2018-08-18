import numpy as np
n, m = map(int, input().split())
a = [];
for _ in range(n): row = list(map(int, input().split())); a.append(row);
print(np.mean(a, axis = 1))
print(np.var(a, axis = 0))
print(np.std(a))
