def indexfinder(l, ele):
	try:
		i = l.index(ele)
		return i
	except ValueError:
		return -1

l = []

for a in range(2,101):
	for b in range(2,101):
		if(indexfinder(l, a**b)==-1):
			l.append(a**b)

print len(l)
