n=int(raw_input())
k=0
for i in range(1, 32000):
    if i*(i+1)==n:
        print i, i+1
        k=1
        break
if k==0:
    print "NU EXISTA"
