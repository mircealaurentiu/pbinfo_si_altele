[a, b, c]=(raw_input()).split()
a=int(a)
b=int(b)
c=int(c)
if a+b+c == 3*a:
    print 1
elif a==b or a==c or b==c:
    print 2
else:
    print 3
