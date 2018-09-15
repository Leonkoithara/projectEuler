dict = {0:"", 1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine", 10: "ten", 11: "eleven", 12: "twelve", 13: "thirteen", 14: "fourteen", 15: "fifteen", 16: "sixteen", 17: "seventeen", 18: "eighteen", 19: "nineteen", 20: "twenty", 30: "thirty", 40: "forty", 50: "fifty", 60: "sixty", 70: "seventy", 80: "eighty", 90: "ninety", 100: "onehundred", 200: "twohundred", 300: "threehundred", 400: "fourhundred", 500: "fivehundred", 600: "sixhundred", 700: "sevenhundred", 800: "eighthundred", 900: "ninehundred", 1000: "onethousand" }
count = 0

for i in range(1, 1001):
	if(dict.has_key(i)):
		count += len(dict[i])
		print dict[i]
	else:
		ones = i%10
		if(i<100):
			tens = i - ones
			words = dict[tens] + dict[ones]
			count += len(words)
			print words
		elif(i<1000):
			tens = i%100
			if(tens>10 and tens < 20):
				hundreds = i-tens
				words = dict[hundreds] + "and" + dict[tens]
				count += len(words)
				print words
			else:
				tens = (i-ones)%100
				hundreds = i-tens-ones
				words = dict[hundreds] + "and" + dict[tens] + dict[ones]
				count += len(words)
				print words
print count
