n = int(input())
count = 0
for i in n:
    if i == 4 and i == 7:
        count += 1

print("YES" if count == 4 or count == 7 else "NO")
