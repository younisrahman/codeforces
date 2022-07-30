for i in range(int(input())):
    n, m = map(int, input().split())
    unhappy = list(map(int, input().split()))
    pair = []
    if m % 2 == 0:
        print(0)
        continue
    for i in range(m):
        pair.append(list(map(int, input().split())))

    unhappyVal = 999999999

    for v in range(m):
        p = pair
        for i in range(m):
            for j in range(len(p)):
                if p[j][0] == unhappy[i] or p[j][1] == unhappy[i]:
                    del p[0]
                    break

        print(p)

    # print(unhappyVal)
