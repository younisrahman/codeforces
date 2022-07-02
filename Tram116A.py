n = 0
current = 0
for i in range(int(input())):
    a, b = map(int, input().split())
    current = (b-a) + current
    # print("a is now", a)
    # print("Current is now", current)
    # n = current
    if current > n:
        n = current
    # print("N is now", n)

print(n)

# 10
# 0 5
# 1 7
# 10 8
# 5 3
# 0 5
# 3 3
# 8 8
# 0 6
# 10 1
# 9 0

# 18
