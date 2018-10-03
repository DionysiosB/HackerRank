pxv = input().split(" ")
sm =0.0
for k in range(len(pxv)):
    cur = pxv[k].split(",")
    sm += (int(cur[0])+int(cur[1])+int(cur[2]))/3
sm = sm/len(pxv)
if sm < 80: print("night")
else:print("day")
