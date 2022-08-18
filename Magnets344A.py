count = 1
previous = ''
for i in range(int(input())):
    s = input()
    if i == 0:
        previous = s
    if s != previous:
        count += 1
        previous = s
print(count)
