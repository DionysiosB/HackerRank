import numpy as np
p = list(map(float, input().split()))
v = int(input())
print(np.polyval(p, v))
