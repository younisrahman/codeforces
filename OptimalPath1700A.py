a = int(input())
for i in range(a):
    n, m = map(int, input().split())
    ans = (m*(m+1))/2
    for j in range(2, n+1):
        ans += ((j-1)*m)+m
    print(int(ans))

# print(a, n, m)
