# LuckyDivision122A.py
n = int(input())
if n % 4 == 0 or n % 7 == 0:
    print("YES")
else:
    s = 'NO'
    n = str(n)
    print(n)
    for i in n:

        s = "NO"
        if i == "4" or i == '7':
            s = "YES"
    print(s)
