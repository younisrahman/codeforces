s = input()
l = len(s)
count = 0
while (s):
    i = s[-1]
    s = s[:-1]
    if s.find(i) == -1:
        continue
    else:
        count += 1

if (l-count) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
