[n, p]=(raw_input()).split()
n=int(n)
p=int(p)
i=0
while True:
    if n**i <= p:
        print n**i,
        i+=1
    else:
        break