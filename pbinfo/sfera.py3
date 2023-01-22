import math

def truncate(f, n):
    return math.floor(f * 10 ** n) / 10 ** n

r = int(input())

aria = 4 * math.pi * r*r
volumul = 4 * math.pi * r*r*r / 3

aria = truncate(aria, 2)
volumul = truncate(volumul, 2)

print(aria, volumul)