[a, b, c]=(raw_input()).split()
a=int(a)
b=int(b)
c=int(c)
if c==1:
    print a+b
elif c==2:
    print a-b
elif c==3:
    print a*b
elif c==4:
    print a/b
else:
    print a%b
