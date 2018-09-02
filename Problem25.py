def digits(num):
	count = 0
	while(num>0):
		num/=10
		count+=1
	return count

f1=1
f2=1
i=3
index = 3

while(1):
	fn = f1+f2
	if(digits(fn)>=20):
		index = i
		break
	else:
		f1 = f2
		f2 = fn
		i+=1

print index
