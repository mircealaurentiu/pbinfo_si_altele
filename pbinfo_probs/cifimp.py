x=int(raw_input())
k=0
while x!=0:
    if x%10%2!=0:
        k=k+1
    x=x/10
print k
