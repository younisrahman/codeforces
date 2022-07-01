s = input()
capital = 0
small = 0
for i in s:
    if i.isupper():
        capital += 1
    else:
        small += 1

print(s.upper() if capital > small else s.lower())
