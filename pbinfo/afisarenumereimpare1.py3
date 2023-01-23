n = int(input())

if n % 2 == 1:
    for i in range(n, 0, -2):
        print(i, end=" ")
else:
    for i in range(n-1, 0, -2):
        print(i, end=" ")