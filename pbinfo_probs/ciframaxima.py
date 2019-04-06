def cif_max(x):
    m=0
    while x!=0:
        if x%10>m:
            m=x%10
        x/=10
    return m
x=int(raw_input())
print cif_max(x)