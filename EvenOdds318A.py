n, k = map(int, input().split())
odd = []
even = []
for i in range(n):
    if i+1 == 1:
        odd.append(i+1)
    elif (i+1) % 2 == 0:
        even.append(i+1)
    else:
        odd.append(i+1)
array = odd + even
print(array[k-1])
