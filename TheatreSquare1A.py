# n = list(map(int, input().strip().split()))[:3]

# print(n[0] % 4 == 0)
# print(n[0] // (4 + 1))

# n, m, a = map(int, input().split())
# if m % a == 0:
#     r1 = m//a
#     print("if", r1)
# else:
#     r1 = m//a+1
#     print("else", r1)
# if n % a == 0:
#     r2 = n//a
#     print("if", r2)
# else:
#     r2 = n//a+1
#     print("else", r2)

# print(r1*r2)

n = list(map(int, input().strip().split()))[:3]

if n[0] % n[2] == 0:
    t1 = n[0]//n[2]
else:
    t1 = n[0]//n[2]+1

if n[1] % n[2] == 0:
    t2 = n[1]//n[2]
else:
    t2 = n[1]//n[2]+1

print(t1*t2)
