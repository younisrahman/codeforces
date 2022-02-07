s = input().lower()
for l in s:
    if l != 'a' and l != 'e' and l != 'i' and l != 'o' and l != 'u' and l != 'y':
        print(f".{l}", end='')
