n = input()
a = ''
b = ''
c = ''
for i in n:
    if i == '1':
        a += '+1'
    elif i == '2':
        b += '+2'
    elif i == '3':
        c += '+3'

result = a+b+c
print(result[1:])
