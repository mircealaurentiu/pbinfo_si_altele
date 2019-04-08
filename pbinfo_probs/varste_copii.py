x=raw_input()
x=x.split()
a=int(x[0])
b=int(x[1])

if a==b:
    print "Copiii au varste egale"
elif a>b:
    print "Primul copil este mai mare cu " + str(a-b) + " ani"
else:
    print "Al doilea copil este mai mare cu " + str(b-a) + " ani"
