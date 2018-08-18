n, m = map(int, input().split())
v = list(map(int, input().split()))
A = set(map(int, input().split()))
B = set(map(int, input().split()))

total = 0;
for u in v:
    if(u in A): total += 1;
    if(u in B): total -= 1;

print(total)
