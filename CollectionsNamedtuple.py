from collections import namedtuple
n = int(input())
cols = ",".join(input().split())
Student = namedtuple("Student", cols)
total = 0.0
for _ in range(n):
    line = input().split()
    s = Student(*line)
    total += int(s.MARKS);
print(total / n)
