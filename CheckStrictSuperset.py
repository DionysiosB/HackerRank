A = set(map(int, input().split()))
n = int(input())
res = True
for _ in range(n):
    B = set(map(int, input().split()))
    if(len(A) <= len(B)): res = False; break;
    for u in B:
        if(u not in A): res = False; break;
print(res)
