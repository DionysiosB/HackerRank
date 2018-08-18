from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 30.0, 4.0
a = 40.0
b = 21.0
c = 30.0
d = 35.0

print(phi((a - mu) / sigma))
print(1.0 - phi((b - mu) / sigma))
print(phi((d - mu) / sigma) - phi((c - mu) / sigma))
