import itertools as it

a = input()

p = it.permutations(a)

suma=0

for i in p:
    k=""
    for j in i:
        k=k+j
    suma=suma+int(k)
print(suma)
