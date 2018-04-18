
states = {
	'Orgean': 'OR',
	'Florida': 'FL',
	'California': 'CA',
	'New York': 'NY',
	'Michigan': 'MI'
}

cities = {
	'CA': 'San Francisco',
	'MI': 'Detroit',
	'FL': 'Jacksonville'
}

def prin():
    print '*' *100

def line():
	print '-' * 10

cities["NY"] = "New York"
cities["OR"] = "Portland"

prin()

line()
print "NY State has: ", cities["NY"]
print "OR states has:", cities["OR"]

line()
print "Michigan's abbreviation is: ", states["Michigan"]
print "Florida's abbreviation is:", states["Florida"]


line()
print "Michigan has: ", cities[states['Michigan']]
print "Florida has:", cities[states['Florida']]


line()
for state, abbrev in states.items():
    print "%s has the abbreviated %s" % (state, abbrev)
    
line()
for abbrev, city in states.items():
    print "%s has the city %s" % (abbrev, city)

line()
for states, abbrev in states.items():
    print "%s state is abbreviated %s and has city %s" % (state, abbrev, cities[abbrev])
    
    
line()

state = states.get('Texas', None)

if (not state):
    print "Sorry, no Texas"
    
    
city = cities.get('TX', 'Does Not Exist')
print "The city for the state 'TX' is: %s" % city
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    