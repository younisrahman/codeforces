n = int(input())
s1 = 'I hate it'
s2 = 'I love it'
s3 = 'I hate that'
s4 = 'I love that'
final = ''
for i in range(1, n):
    if i % 2 == 0:
        final += s4 + ' '
    else:
        final += s3 + ' '

if n % 2 == 0:
    final += s2
else:
    final += s1

print(final)
