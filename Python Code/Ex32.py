the_count = [1, 2, 3, 4, 5]
fruits = ['apples', 'oranges', 'pears', 'apricots']
change = [1, 'pennies', 2, 'dimes', 3, 'quarters']

#first kind of for-loop goes through a list
for number in the_count:
	print "This is the count %d" % number
	
for fruit in fruits:
	print "A fruit of of type: %s" % fruit
	
#also we can go through mixed lists
for i in change:
	print "I got %r" % i
	
elements = []

for i in range(0, 6):
	print "Adding %d to the list." % i
	elements.append(i)
	
for i in elements:
	print "Element was: %d" % i
	