import re
t = int(input())
for _ in range(t):
    s = input()
    isValid = "True"
    try: re.compile(s)
    except re.error: isValid = "False"
    print(isValid)
