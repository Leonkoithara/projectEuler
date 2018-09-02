def fact(num):
	fac = 1
	if(num==0 or num==1):
		return 1
	else:
		for i in range(num, 1, -1):
			fac *= i
		return fac

def comb(n, r):
	return (fact(n))/(fact(r)*fact(n-r))

count = 0

for n in range(1,101):
	for r in range(0,n+1):
		if(comb(n,r)>1000000):
			count +=1

print count
