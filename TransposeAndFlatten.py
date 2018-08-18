import numpy as np
nrow, ncol = map(int, input().split())
a = []
for _ in range(nrow): row = list(map(int, input().split())); a.append(row);
a = np.array(a);
print(np.transpose(a))
print(a.flatten())
