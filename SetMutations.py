n = int(input())
a = set(map(int, input().split()))
m = int(input())
for k in range(m):
    action, u = input().split();
    b = set(map(int, input().split()))
    if(action == "update"): a |= b;
    if(action == "intersection_update"): a &= b;
    if(action == "difference_update"): a -= b;
    if(action == "symmetric_difference_update"): a ^= b;

total = 0
for p in a: total += p;
print(total)
