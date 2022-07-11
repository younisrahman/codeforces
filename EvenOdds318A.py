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
a = (k*2)-1
b = 0
if (a > n):
    if n % 2 == 0:
        b = n/2
    else:
        b = n/2+1
        k = k-b
        b = k*2
        print(b)
else:
    print(a)
