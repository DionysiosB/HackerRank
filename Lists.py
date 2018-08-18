if __name__ == '__main__':

    a = []
    N = int(input())
    for _ in range(N):
        b = input().split();
        for p in range(1, len(b)): b[p] = int(b[p]);
        if(b[0] == 'insert'): a = a[0: b[1]] + [b[2]] + a[b[1]:];
        elif(b[0] == 'print'): print(a);
        elif(b[0] == 'remove'):
            for p in range(len(a)):
                if(a[p] == b[1]): a = a[:p] + a[p + 1:]; break;
        elif(b[0] == 'append'): a.append(b[1])
        elif(b[0] == 'sort'): a.sort()
        elif(b[0] == 'pop'): a.pop()
        elif(b[0] == 'reverse'): a.reverse()
