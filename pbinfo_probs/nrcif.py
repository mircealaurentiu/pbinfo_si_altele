def cate_cifre(x):
    k=0
    while x!=0:
        k+=1
        x/=10
    return k
x=int(raw_input())
print cate_cifre(x)
