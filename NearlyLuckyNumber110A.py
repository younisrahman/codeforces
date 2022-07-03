n = input()
count = 0
for i in n:
    i = int(i)
    if i == 4 or i == 7:
        count += 1

print("YES" if count == 4 or count == 7 else "NO")
