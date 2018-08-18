import math
N = input();
nums = map(int, raw_input().split())

counts = {}
inorder = True
prev = -1

for cur in nums:
    if(cur < prev): inorder = False;
    prev = cur;

    if(cur in counts): counts[cur] += 1;
    else:counts[cur] = 1

if(inorder): print("0.000000");
else:
    total = math.factorial(N)
    for k in counts.values(): total /= math.factorial(k)
    print "%.6f" % total
