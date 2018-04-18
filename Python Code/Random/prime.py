number = int(raw_input("Enter Number"))

prime_number_found = True

for i in range(2,number//2+1):
    if(number % i == 0):
        prime_number_found = False
        break
    
if(prime_number_found == True):
    print "Prime Number Found!"
    
else:
    print "Not a Prime Number"