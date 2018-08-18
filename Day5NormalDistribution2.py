from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 70.0, 10.0
a = 80.0
b = 60.0

ra = 1.0 - phi((a - mu) / sigma); print(round(100 * ra, 2))
rb = 1.0 - phi((b - mu) / sigma); print(round(100 * rb, 2))
rc = phi((b - mu) / sigma); print(round(100 * rc, 2))
