n = input()
if len(n) < 7:
    print("NO")
else:
    for i in range(len(n)):
        if len(n) - i < 7:
            print("NO")
            break
        elif n[i:i+7] == "1111111":
            print("YES")
            break
        elif n[i:i+7] == "0000000":
            print("YES")
            break
