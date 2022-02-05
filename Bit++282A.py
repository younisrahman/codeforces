n = int(input())
ans = 0
for i in range(n):
    x = input()
    if x[:1] == 'X':

        if x[1:] == '++':
            ans += 1
        else:
            ans -= 1
    else:

        if x[:-1] == "--":
            ans -= 1
        else:
            ans += 2

print(ans)
