import math

b = float(input())
c = float(input())
a = math.sqrt(b**2 + c**2)
print str(int(round(math.degrees(math.atan(b/c))))) + "°"
