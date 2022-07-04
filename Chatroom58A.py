s = input()
count = 0
str = ''
for i in s:
    if count == 0 and i == 'h':
        str = str + i
        count = count + 1
    elif count == 1 and i == 'e':
        str = str + i
        count = count + 1
    elif count == 2 and i == 'l':
        str = str + i
        count = count + 1
    elif count == 3 and i == 'l':
        str = str + i
        count = count + 1
    elif count == 4 and i == 'o':
        str = str + i
        count = count + 1

print("Yes" if str == 'hello' else "No")
