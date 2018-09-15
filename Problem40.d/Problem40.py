frac = ""
i = 1
while(True):
	frac += str(i)
	i += 1
	if(i>1000000):
		break

pro = 1
pro = int(frac[0])*int(frac[9])*int(frac[99])*int(frac[999])*int(frac[9999])*int(frac[99999])*int(frac[999999])

print pro
