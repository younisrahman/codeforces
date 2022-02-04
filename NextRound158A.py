n, k = map(int, input().split())
a = list(map(int, input().strip().split()))[:n]
count = 0

for i in range(n):
    if(a[i] >= a[k] and a[i] != 0):
        count += 1

print(count)
