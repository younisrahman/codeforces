n = list(map(int, input().strip().split()))[:3]

height = 0
width = 0
count = 0
while(True):
    count += 1
    tilesNumber = (n[2]*count)
    if(1 >= (n[0] / tilesNumber) and height == 0):
        height = count
    if(1 >= (n[1] / tilesNumber) and width == 0):
        width = count
    if height != 0 and width != 0:
        break

print(height*width)
print(width)
print(height)
