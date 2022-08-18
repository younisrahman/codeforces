# Anton and Danik
n = int(input())
s = input()
A = 0
D = 0
for i in s:
    if i == 'A':
        A += 1
    elif i == 'D':
        D += 1
if A > D:
    print("Anton")
elif A < D:
    print("Danik")
else:
    print("Friendship")
