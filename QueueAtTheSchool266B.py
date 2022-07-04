n, s = map(int, input().split())
queue = input()
output = ''
for i in range(s):
    count = 0
    # queue = output
    output = ''
    while(n > count):
        try:
            if queue[count] == "B" and queue[count+1] == "G":
                output += "GB"
                count += 2
            else:
                output += "G"
                count += 1
        except:
            output += queue[count]
            count += 1

    queue = output


print(queue)
