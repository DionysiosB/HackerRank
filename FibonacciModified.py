t1, t2, n = map(int, raw_input().split())
t = [t1, t2]

if(n == 1):
    print t1;
else:
    for _ in range(n - 2):t.append(t[-2] + t[-1] * t[-1]);
    print t[-1];

