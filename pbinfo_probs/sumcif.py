def sum_cif(x):
    s=0
    while x!=0:
        s=s+(x%10)
        x=x/10
    return s

x=int(raw_input())
print sum_cif(x)
