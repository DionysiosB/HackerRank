import numpy as np
n = int(input())
a = []
for _ in range(n): row = list(map(float, input().split())); a.append(row);
print(np.linalg.det(a))
