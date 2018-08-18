a = int(input())
s = set(map(int, input().split()));
a = int(input())
t = set(map(int, input().split()));
u = s.difference(t)
v = t.difference(s)
w = list(u.union(v))
w.sort()
for num in w: print(num);
