import sys
goods=[]
final=[]
k=0
a=0; b=0

s=sys.stdin.readlines()
for word in s:
	goods.append(word)



goods=[i.replace('\n','') for i in goods]

for i in range(0, len(goods)):
	goods[i]=goods[i].split()

for lst in goods:
	for i in lst:
		final.append(i)



for nr in final[:0:-1]:
	if int(nr) % 2 != 0:
		k+=1
		if k > 2:
			break
		if k == 1:
			b=int(nr)
		else:
			a=int(nr)

if a==0 or b==0:
	print "Numere insuficiente"
else:
	print a, b