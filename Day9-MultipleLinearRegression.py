import numpy as np

m, n = map(int, raw_input().split())
X = np.zeros((n, m + 1), np.float)
Y = np.zeros(n, np.float)

for row in range(n):
    v = map(float, raw_input().split())
    X[row][0] = 1;
    for col in range(1, m + 1): X[row][col] = v[col - 1];
    Y[row] = v[-1]

b = np.dot(np.dot(np.linalg.inv(np.dot(X.transpose(), X)) , X.transpose()), Y)

q = int(raw_input())
for _ in range(q):
    x = map(float, raw_input().split());
    x = np.array(x); x = np.insert(x, 0, 1);
    res = np.sum(b * x);
    print(res)
