n = int(input())
arr = list(map(int, input().split()))[:n]
# ans=[]
for i in range(n):
    min_value = min(arr)
    min_index = arr.index(min_value+i)
    # arr.remove(min_value)
    print(min_index+1, end=' ')
print()
