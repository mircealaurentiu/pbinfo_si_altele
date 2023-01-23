import math

n, m = map(int, input().split())

for i in range(n, 0, -1):
    print(i*m, end=" ")