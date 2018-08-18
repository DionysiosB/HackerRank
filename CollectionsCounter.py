from collections import Counter
x = int(input())
a = list(map(int, input().split()))
c = Counter(a)
total = 0
n = int(input())
for _ in range(n):
    s, m = map(int, input().split())
    if((s in c) and c[s] > 0): c[s] = c[s] - 1; total += m;
print(total)
