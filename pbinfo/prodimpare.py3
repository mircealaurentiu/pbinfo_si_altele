n=input()
n=int(n)
k=0

prod=1
curr=1

while(k!=n):
    prod=prod*curr
    k=k+1
    curr=curr+2
print(prod)