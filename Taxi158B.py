n = int(input())
# i = input()
one = 0
two = 0
three = 0
four = 0
for i in input().split()[:n]:
    i = int(i)
    if i == 1:
        one += 1
    elif i == 2:
        two += 1
    elif i == 3:
        three += 1
    elif i == 4:
        four += 1

count = four
if three == one:
    count += one
    three = one = 0
elif three < one:
    count += three
    one = one - three
    three = 0
elif three > one:
    count += three
    three = one = 0

if two % 2 == 0:
    count += two//2
    two = 0
elif two % 2 == 1:
    count += two//2
    two = 1
if two == 1:
    one -= 2
    count += 1
if one > 0:

    if one % 4 == 0:
        count += one//4
        one = 0
    elif one % 4 != 0:
        count += (one//4)+1

print(count)
