def check(num):
	n = num
	dsum = 0
	while(num>0):
		dig = num%10
		dsum += dig**5
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

for a in range(0,10):
	for b in range(0,10):
		for c in range(0,10):
			for d in range(0,10):
				for e in range(0,10):
					for f in range(0,10):
						num = a**5+b**5+c**5+d**5+e**5+f**5
						if(indexfinder(numlist, num)==-1):
							if(check(num)==1):
								print num 
								fsum += num
								numlist.append(num)

print "Total sum is"
print fsum
