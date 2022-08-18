arr = []
arrnum = []
for _ in range(5):
    arr2 = []
    n = input()
    for i in range(5):
        num = int(n.strip().split()[i])
        # print(num)
        arr2.append(num)
        if num == 1:
            # print("SS")
            arrnum.append(_)
            arrnum.append(i)
    arr.append(arr2)

# for _ in range(6):
#     arr.append(list(map(int, input().rstrip().split())))

beaatufilNumber = abs(arrnum[0]-2) + abs(arrnum[1]-2)
# print(arr)
# print(arrnum)
print(beaatufilNumber)
