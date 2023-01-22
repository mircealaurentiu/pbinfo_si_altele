def suma_totala_intre_doi_intregi(a, b):
    suma_totala = 0
    for i in range(a,b+1):
        suma_totala = suma_totala + i
    return suma_totala


a, b, c = map(int, input().split())

print(suma_totala_intre_doi_intregi(a,b), suma_totala_intre_doi_intregi(b,c), suma_totala_intre_doi_intregi(a,c))
