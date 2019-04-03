x=int(raw_input())
l=[]
k=1
i=1
while k<=x:
    l.append(i)
    i+=2
    k+=1
q=list(reversed(l))
for i in q:
    print i,
