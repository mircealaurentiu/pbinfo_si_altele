import math

a, b = map(int, input().split())

c = b/10 - (a-1)/10

if a%10==0 or b%10==0:
    c = c + 1

print(int(c))