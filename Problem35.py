import math

def primeCheck(n):
	if(n==1):
		return False
	for i in range(2, int(math.sqrt(n))+1):
		if(n%i==0):
			return False
	return True

count = 13

for i in range(101, 1000000, 2):
	istr = str(i)
	if(primeCheck(i)):
		flag = True
		for j in range(1, len(istr)):
			istr = istr[1:] + istr[0]
			if(primeCheck(int(istr))==False):
				flag = False
				break
		if(flag):
			count += 1
			print i

print "Final count is: ",
print count
