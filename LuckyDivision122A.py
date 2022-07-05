# LuckyDivision122A.py
n = int(input())
if n % 4 == 0 or n % 44 == 0 or n % 444 == 0 or n % 47 == 0 or n % 447 == 0 or n % 474 == 0 or n % 7 == 0 or n % 77 == 0 or n % 74 == 0 or n % 777 == 0 or n % 747 == 0 or n % 774 == 0:
    print("YES")
else:
    s = 'NO'
    n = str(n)
    for i in n:

        s = "NO"
        if i == "4" or i == '7':
            s = "YES"
        else:
            s = "NO"
            break
    print(s)
