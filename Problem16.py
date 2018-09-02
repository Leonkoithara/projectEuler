import math

ans = int(math.pow(2, 1000))
digsum = 0

while(ans>0):
	dig = ans%10
	digsum += dig
	ans /= 10

print digsum
