from itertools import combinations
s, k = input().split()
s = sorted(s);
for n in range(1, 1 + int(k)):
    for w in combinations(s, n): print("".join(w));
