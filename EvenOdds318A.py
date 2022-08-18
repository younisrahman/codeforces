# n, k = map(int, input().split())
# odd = []
# even = []
# for i in range(n):
#     if i+1 == 1:
#         odd.append(i+1)
#     elif (i+1) % 2 == 0:
#         even.append(i+1)
#     else:
#         odd.append(i+1)
# array = odd + even
# print(array[k-1])
n, k = map(int, input().split())
half = n // 2 + n % 2

if k <= half:
    print((k * 2) - 1)
else:
    print((k-half) * 2)
