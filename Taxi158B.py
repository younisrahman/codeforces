n = int(input())
one = 0
two = 0
three = 0
four = 0
for i in range(n):
    a = int(input())
    if a == 1:
        one += 1
    elif a == 2:
        two += 1
    elif a == 3:
        three += 1
    elif a == 4:
        four += 1
print(one)
print(two)
print(three)
print(four)
