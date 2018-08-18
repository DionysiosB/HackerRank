import numpy as np
n = int(input())
a = []; b = [];
for _ in range(n): row = list(map(int, input().split())); a.append(row);
for _ in range(n): row = list(map(int, input().split())); b.append(row);
a = np.array(a);
b = np.array(b);
print(np.dot(a, b))
