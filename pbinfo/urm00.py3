n = int(input())

if(n % 100 == 0):
    print(n)
else:
    x = 0
    x = n / 100
    x=int(x)
    x = x * 100 + 100

    print(x)
