from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 2.4, 2.0
n = 100
t = 250

M = n * mu
S = sqrt(n) * sigma

res = phi((t - M) / S); print(round(res, 4))
