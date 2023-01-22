def este_triunghi(a, b, c):
    if a+b<=c or a+c<=b or b+c<=a:
        return 0
    return 1

def este_isoscel_sau_nu(a, b, c):
    if este_triunghi(a, b, c) != 0:
        if a==b and a!=c or a==c and a!=b or b==c and b!=a:
            return "Formeaza triunghi isoscel"
        else:
            return "Nu formeaza triunghi isoscel"
    else:
        return "Nu formeaza triunghi"

x=(raw_input()).split()
a=float(x[0])
b=float(x[1])
c=float(x[2])
print este_isoscel_sau_nu(a, b, c)
