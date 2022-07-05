# Beautiful Year
n = int(input()) + 1
loop = True
while loop:
    year = str(n)
    yearSet = set()
    for i in year:
        yearSet.add(i)
    if len(yearSet) == 4:
        loop = False
    else:
        n = n + 1

print(n)
