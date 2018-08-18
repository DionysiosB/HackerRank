n = int(input())
s = set(map(int, input().split()))
m = int(input())
for _ in range(m):
    action = input().split()
    if(action[0] == "pop"): s.pop();
    if(action[0] == "remove"):s.remove(int(action[1]));
    if(action[0] == "discard"): s.discard(int(action[1]));

total = 0;
for u in s: total += u;
print(total)
