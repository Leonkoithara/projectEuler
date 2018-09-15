def digits(num):
	dig = 0
	while(num>0):
		num /= 10
		dig +=1
	return dig

def primeCheck(num):
	if(num==1):
		return -1
	elif(num==2):
		return 1
	else:
	 	for i in range(2, int(num**0.5+1)):
			if(num%i==0):
				return -1
		return 1

def lefttoright(num):
	while(1):
		if(primeCheck(num)==1):
			digit = digits(num)
			if(digit==1):
				break
			else:
				msb = (num) / (10**(digit-1))
				num = num % (msb*(10**(digit-1)))
		else:
			return -1
	return 1

def righttoleft(num):
	while(num>0):
		if(primeCheck(num)==1):
			num/=10
		else:
		 return -1
	return 1

i = 11
count = 0
psum = 0

while(1):
	if(lefttoright(i)==1 and righttoleft(i)==1):
		print i
		count += 1
		psum += i
		i += 2
		if(count == 11):
			break
	else:
		i += 2

print "The sum is"
print psum
