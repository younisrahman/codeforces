s1 = input()
s2 = input()
final = ''
for i in range(len(s1)):
    if s1[i] == s2[i]:
        final += '0'
    else:
        final += '1'
print(final)
