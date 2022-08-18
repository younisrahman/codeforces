n = int(input())
arr = list(map(int, input().split()))
total = sum(arr)
print(format(total/n, ".12f"))
