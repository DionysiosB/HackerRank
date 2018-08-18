import datetime, calendar
month, day, year = map(int, input().split())
d = datetime.date(year, month, day)
print(d.strftime("%A").upper())
