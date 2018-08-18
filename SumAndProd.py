import numpy as np
n, m = map(int, input().split())
a = [];
for _ in range(n): row = list(map(int, input().split())); a.append(row);
a = np.array(a)
print(np.prod(np.sum(a, axis = 0)))
