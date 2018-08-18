from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 20.0, 2.0
a = 19.5
b = 20.0
c = 22.0

print(phi((a - mu) / sigma))
print(phi((c - mu) / sigma) - phi((b - mu) / sigma))
