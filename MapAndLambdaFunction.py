cube = lambda x: x ** 3;

def fibonacci(n):
    f = list();
    if(n >= 1): f.append(0)
    if(n >= 2): f.append(1)
    for _ in range(n - 2): f.append(f[-1] + f[-2]);
    return f
