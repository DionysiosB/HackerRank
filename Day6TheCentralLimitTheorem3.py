from math import *
def phi(x): return (1.0 + erf(x / sqrt(2.0))) / 2.0

mu, sigma = 500, 80
n = 100;
z = 1.96;

M = mu
S = sigma / sqrt(n)

A = M - z * S; print(round(A, 2));
B = M + z * S; print(round(B, 2));
