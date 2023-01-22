def suma_cifre(n):
    suma = 0
    while(n>1):
        suma = suma + n%10
        n = n / 10
    return int(suma)

lst = a, b, c = list( map(int, input().split()) )

#print(suma_cifre(a), suma_cifre(b), suma_cifre(c))
maxx = max(suma_cifre(i) for i in lst)

[print(i, end = " ") for i in lst if suma_cifre(i)==maxx]