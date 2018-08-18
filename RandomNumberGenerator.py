from fractions import gcd

N = int(raw_input())

for _ in range(N):
    A, B, C = map(int, raw_input().split())
    if(B < A) : A, B = B, A
    num, den = 0, 2 * A * B
    if(C < 0): num = 0
    if(0 <= C and C <= A): num = C ** 2;
    elif(A <= C and C <= B): num = 2 * A * C - A * A;
    elif(B <= C and C <= A + B): num = 2 * A * B - (A + B - C)**2
    elif(A + B <= C): num = 2 * A * B

    g = gcd(num, den)
    num /= g; den /= g;
    print "%d/%d" % (num, den)
