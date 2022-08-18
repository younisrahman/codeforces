n = int(input())
coins = list(map(int, input().split()))
coins.sort()
sum = sum(coins)
sum2 = 0
count = 0
for i in range(len(coins)-1, -1, -1):
    sum2 += coins[i]
    sum -= coins[i]
    count += 1
    if sum2 > sum:
        break

print(count)
