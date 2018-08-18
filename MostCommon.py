from collections import Counter
def cmpDict(x,y):return (x[1] < y[1]) or (x[1] == y[1] and x[0] < y[0])
c = Counter(input())
for w in sorted(c.items(), key = lambda x: (-x[1], x[0]) )[:3] : print(w[0], w[1])
