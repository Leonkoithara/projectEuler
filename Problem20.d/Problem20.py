product = 1
digsum = 0
for i in range(1, 100):
	product *= i

while(product>0):
	dig = product % 10
	digsum += dig
	product /= 10

print digsum
