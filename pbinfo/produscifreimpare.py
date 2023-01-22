def prod_cif_imp(x):
    p=1
    u=0
    k=0
    while x!=0:
        u=x%10
        if u%2!=0:
            p=p*u
            k=1
        x/=10
    if k!=0:
        return p
    else:
        return -1
x=int(raw_input())
print prod_cif_imp(x)