
numbers = []

def while_loop(ini, limit, inc):
	
	i = ini
	while (i < limit):
		print "At the top i is %d" % i
		numbers.append(i)
		
		i += inc
		print "Numbers now: ", numbers
		
		print "At the bottom i is %d" % i
		
while_loop(0, 6)		
print "The Numbers: "

for num in numbers:
	print num
	