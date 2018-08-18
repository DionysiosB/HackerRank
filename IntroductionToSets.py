def average(array):
    s = set(array);
    sum = 0;
    for u in s: sum += u;
    return (sum / len(s));
