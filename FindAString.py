def count_substring(string, sub):
    start = string.find(sub)
    if(start < 0): return 0
    count = 0
    while(True):
        count += 1
        start = string.find(sub, start + 1, len(string))
        if(start < 0): break;
    return count;
