def cif(x):
    y=x
    k=0
    while y>9:
        y/=10
    while x!=0:
        if x%10==y:
            k+=1
        x/=10
    return k
x=int(raw_input())
if x!=0:
    print cif(x)
else:
    print 1