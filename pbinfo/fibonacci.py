def fib(n):
    v=[]
    a=b=1
    i=3
    c=a+b
    v.append(a)
    v.append(b)
    while i<=n:
        v.append(c)
        a=b
        b=c
        c=a+b
        i+=1
    return v
n=int(raw_input())
if n==1:
    v=[1]
elif n==2:
    v=[1, 1]
else:
    v=fib(n)
for i in v:
    print i,
