s = input().lower()
for l in s:
    if l != 'a' and l != 'e' and l != 'i' and l != 'o' and l != 'u':
        print('.', l, end='')
