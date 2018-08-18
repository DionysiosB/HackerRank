for i in range(int(input())): #More than 4 lines will result in 0 score. Blank lines won't be counted.
    a = int(input()); A = set(input().split())
    b = int(input()); B = set(input().split())
    res = True;
    for u in A:
        if(u not in B): res = False;
    print(res)
