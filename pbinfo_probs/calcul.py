x=int(raw_input())
n=0

def sum_cif(x):
    s=0
    while(x!=0):
        s=s+(x%10)
        x=x/10
    return s

def prod_cif(x):
    p=1
    while(x>0):
        p=p*(x%10)
        x=x/10
    return p

if x<=15:
    n=x*x
elif x<=30:
    n=sum_cif(x)
else:
    n=prod_cif(x)

print n
