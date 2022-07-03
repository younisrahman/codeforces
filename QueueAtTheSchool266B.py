n, s = map(int, input().split())
queue = input()
for i in range(s):
    for j in range(len(queue)-1):
        print(queue[j])
