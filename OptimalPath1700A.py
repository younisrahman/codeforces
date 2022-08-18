a = int(input())
while (a != 0):
    n, m = map(int, input().split())
    ans = (m*(m-1))/2
    ans += m*((n*(n+1))/2)
    # for j in range(2, n+1):
    #     # print(j)
    #     ans += ((j-1)*m)+m
    print(int(ans))
    a -= 1

# print(a, n, m)
