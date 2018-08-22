def minion_game(s):
    n = len(s);
    kevin = 0
    stuart = 0
    for k in range(n):
        if s[k] in "AEIOU": kevin += (n - k);
        else: stuart += (n - k);

    if(stuart > kevin): print("Stuart", stuart)
    elif(stuart < kevin): print("Kevin", kevin)
    else:print("Draw")
