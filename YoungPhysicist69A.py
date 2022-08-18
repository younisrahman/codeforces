n = int(input())
x = y = z = 0
for i in range(n):
    a, b, c = map(int, input().split())
    x = a + x
    y = b + y
    z = c + z

print("YES" if x == y == z == 0 else "NO")
