from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 70.0, 10.0
a = 80.0
b = 60.0

print(1.0 - phi((a - mu) / sigma))
print(1.0 - phi((b - mu) / sigma))
print(phi((b - mu) / sigma))
