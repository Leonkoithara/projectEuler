def valuefinder(d, key):
	if(d.has_key(key)):
		return d[key]
	else:
	 	return -1

collatz = {1: 1}
num = 1
maxcount = 1

for i in range(2,3):
	seq = i
	count = 1
	while(1):
		if(seq==1):
			break
		elif(valuefinder(collatz, seq)==-1):
			if(seq%2==0):
				seq /= 2
				count+=1
				if(seq==1):
					collatz.update({i: count})
					if(count>maxcount):
						maxcount = count
						num = i
			elif(seq%2==1):
				seq = 3*seq+1
				count+=1
		else:
			count+= valuefinder(collatz, seq)
			if(seq==1):
				if(count>maxcount):
					num = i
				break

print num, maxcount
