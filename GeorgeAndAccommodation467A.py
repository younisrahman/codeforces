n = int(input())
count = 0
for i in range(n):
    l, c = map(int, input().split())
    if (l+2) <= c:
        count += 1

print(count)
