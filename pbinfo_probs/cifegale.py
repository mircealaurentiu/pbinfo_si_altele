def cif_egale(x):
    u=x%10
    while x!=0:
        if x%10 != u:
            return "nu"
        x=x/10
    return "da"
x=int(raw_input())
print cif_egale(x)
