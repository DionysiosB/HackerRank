from itertools import permutations
s, k = input().split();
for u in sorted(permutations(s, int(k))): print("".join(u));
