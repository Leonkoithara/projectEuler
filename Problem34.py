def fact(num):
	if(num==0 or num==1):
		return 1
	fac = 1
	for i in range(num, 1, -1):
		fac *= i
	return fac

def check(num):
	n = num
	dsum = 0
	while(num>0):
		dig = num%10
		dsum += fact(dig)
		num /=10
	if(dsum==n):
		return 1
	else:
		return -1

def indexfinder(l, num):
	try:
		i = l.index(num)
		return i
	except ValueError:
		return -1

fsum = 0
numlist = []

for num in range(10,1000001):
	if(indexfinder(numlist, num)==-1):
		if(check(num)==1):
			print num 
			fsum += num
			numlist.append(num)

print "Total sum is"
print fsum
