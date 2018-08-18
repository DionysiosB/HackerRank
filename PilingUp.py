from collections import deque
T = int(input())
for _ in range(T):
    n = int(input())
    x = list(map(int, input().split()))
    d = deque(x)

    length = 2 ** 32;
    ans = "Yes"
    while(len(d)):
        if(d[-1] >= d[0] and d[-1] <= length): length = d.pop();
        elif(d[0] >= d[-1] and d[0] <= length): length = d.popleft();
        else: ans = "No"; break;
    print(ans)
