import math

b = int(input())
c = int(input())
a = math.sqrt(b**2 + c**2)
print str(int(round(math.degrees(math.acos(c/a))))) + "°"
