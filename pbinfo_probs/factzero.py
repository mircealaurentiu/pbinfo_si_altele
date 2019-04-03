from math import factorial
x=int(raw_input())

r=str(factorial(x))

k=0
for digit in reversed(r):
	if digit == '0':
		k+=1
	else:
		break
print k