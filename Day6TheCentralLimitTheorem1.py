from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 205.0, 15.0
n = 49
t = 9800

M = n * mu
S = sqrt(n) * sigma

res = phi((t - M) / S); print(round(res, 4))
