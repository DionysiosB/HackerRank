k = int(input())
s = set()
t = set()
a = list(map(int, input().split()))

for u in a:
    if u in s: t.discard(u);
    else: s.add(u); t.add(u);

print(t.pop())

