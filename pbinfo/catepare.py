x=(raw_input()).split()
x=[int(i) for i in x]
s=0
for i in x:
    if i%2==0:
        s+=1
if s!=1:
    print s-1
else:
    print "NU EXISTA"
