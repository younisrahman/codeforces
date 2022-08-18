l, b = map(int, input().split())
count = 1
while True:
    if ((l*3)*count) > ((b*2)*count):
        break
    l = (l*3)*count
    b = (b*2)*count
    count += 1

print(count)
