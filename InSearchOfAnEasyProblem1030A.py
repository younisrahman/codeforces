n = int(input())
arr = list(map(int, input().split()))[:n]
sum = sum(arr)
print('HARD' if sum > 0 else 'EASY')
