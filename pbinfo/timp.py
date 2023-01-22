x=(raw_input()).split()
h=int(x[0])
m=int(x[1])
x=int(x[2])
minu = 60*h+m+x
h2=0
while minu>=60:
    h2=h2+1
    h2=h2%24
    minu=minu-60
print h2, minu
