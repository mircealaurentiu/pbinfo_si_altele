def este_orizontala(x1, y1, x2, y2):
    if y1==y2:
        return 1
def este_verticala(x1, y1, x2, y2):
    if x1==x2:
        return 1
x=(raw_input()).split()
x=[int(i) for i in x]
x1=x[0]
y1=x[1]
x2=x[2]
y2=x[3]
if este_orizontala(x1, y1, x2, y2)==1:
    print "orizontala"
elif este_verticala(x1, y1, x2, y2)==1:
    print "verticala"
else:
    print "oblica"