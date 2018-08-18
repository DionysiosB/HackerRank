n, s = input().split()
scores = list();
for _ in range(int(s)): scores.append(list(map(float, input().split())))
s = list(zip(*scores))
res = [sum(u)/len(u) for u in s]
for u in res: print(u)
