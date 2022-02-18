s = input()
for i in s:
    s.pop(0)
    if s.find(i) == -1:
        print(f"No {i} here!")
    else:
        print(f"Found {i} in the string.")
