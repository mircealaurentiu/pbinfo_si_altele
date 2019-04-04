k=0
x=int(raw_input())
if x==0:
    print 1
else:
    while x!=0:
        k+=1
        x/=10
    print k
