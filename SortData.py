n , m = map(int, input().split())
a = list();
for _ in range(int(n)): a.append(list(map(int, input().split())))
k = int(input())
a.sort(key=lambda x: x[k])
for u in a:
    for p in u: print(p, end = " ");
    print("")
