import numpy as np
n, m = map(int, input().split())
a = []
for _ in range(n): row = list(map(int, input().split())); a.append(row);
print(np.max(np.min(a, axis = 1)))
