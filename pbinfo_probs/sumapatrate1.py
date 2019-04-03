n=int(raw_input())
s=0
i=1
while True:
    if i**2 <= n:
        s+=i**2
        i+=1
    else:
        break
print "Rezultatul este " + str(s)