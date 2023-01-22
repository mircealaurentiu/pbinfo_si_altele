def fib(n):
    a=b=1
    c=a+b
    while c<=n:
        print c,
        a=b
        b=c
        c=a+b
    
    
n=int(raw_input())
print 1, 1,
if n>1:
    fib(n)
