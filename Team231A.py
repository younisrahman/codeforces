n = int(input())
implement = 0
for i in range(n):
    a = list(map(int, input().strip().split()))[:3]
    if sum(a) >= 2:
        implement += 1
print(implement)
