import numpy as np
n, m = map(int, input().split())
a = []
b = []
for _ in range(n): row = list(map(int, input().split())); a.append(row);
for _ in range(n): row = list(map(int, input().split())); b.append(row);
a = np.array(a);
b = np.array(b);
print(np.add(a, b))
print(np.subtract(a, b))
print(np.multiply(a, b))
print(a // b)
print(np.mod(a, b))
print(np.power(a, b))
