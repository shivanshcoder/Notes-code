import sys
import random


TILES_USED = 0 # records how many tiles have been returned to user
SHUFFLE = False # records whether to shuffle the tiles or not

# inserts tiles into myTiles
def getTiles(myTiles):
    global TILES_USED
    while len(myTiles) < 7  and TILES_USED < len(Tiles):
        myTiles.append(Tiles[TILES_USED])
        TILES_USED += 1
    print TILES_USED

# prints tiles and their scores
def printTiles(myTiles):
    tiles = ""
    scores = ""
    for letter in myTiles:
        tiles += letter + "  "
        thisScore = getScore(letter)
        if thisScore > 9:
            scores += str(thisScore) + " "
        else:
            scores += str(thisScore) + "  "

    print("\nTiles : " + tiles)
    print("Scores: " + scores)

# gets the score of a letter
def getScore(letter):
    for item in Scores:
        if item[0] == letter:
            return item[1]



scoresFile = open('scores.txt')
tilesFile = open('tiles.txt')

# read scores from scores.txt and insert in the list Scores
Scores = []
for line in scoresFile :
    line = line.split()
    letter = line[0]
    score = int(line[1])
    Scores.append([letter,score])
scoresFile.close()

# read tiles from tiles.txt and insert in the list Tiles
Tiles = []
for line in tilesFile:
    line= line.strip()
    Tiles.append(line)
tilesFile.close()

# decide whether to return random tiles
rand = raw_input("Do you want to use random tiles (enter Y or N): ")
if rand == "Y":
    SHUFFLE = True
else:
    if rand != "N":
        print("You did not enter Y or N. Therefore, I am taking it as a Yes :P.")
        SHUFFLE = True
        
if SHUFFLE:
    random.shuffle(Tiles)


myTiles = []
getTiles(myTiles)
printTiles(myTiles)
myTiles.sort()
printTiles(myTiles)

########################################################################
# Write your code below this
########################################################################
vals = 0

def del_n(word):
    for i in range(0,len(word)) :
        if(word[i] == '\n') :
            del word[i]
            break
            
            
def Compare_Word(split_word):
    tempMyTiles = myTiles[:]
    
    global vals
    
    myTileIndex = 0
    wordIndex = 0
    
    
    
    #iterates over and checks if the tile can be used or not
    #for myTileIndex in range(0, TILES_USED) :
    while (myTileIndex < len(tempMyTiles)) :
        wordIndex = 0
        #iterates over the dictionary word
#        for wordIndex in range(0, len(split_word)) :
        while(wordIndex < len(split_word) ):  
            
          #  print "Word Index:",wordIndex
         #   print "split_word :",len(split_word)
            
            #print "\ntempMyTiel :", len
         #   print "myTileIndex:", myTileIndex 
            
            
            if tempMyTiles[myTileIndex] == split_word[wordIndex] :
                del tempMyTiles[myTileIndex]
                del split_word[wordIndex]
               # print tempMyTiles
              #  print myTiles
                vals += 1
            
            wordIndex += 1
            
        myTileIndex += 1    
        
        
    if(len(split_word) == 0) :
        
        print "My Tiles:",myTiles
        print "The Word:",split_word
        
        print "Can be used"
        raw_input()
        
    else:
        print "Fail"
                
  
            
def Getting_words():
    #Opens the Dictionary file
    dict_file = open("dictionary.txt")
    
    #Loop for Reading each word one by one
    for line in dict_file:
        
        if TILES_USED < len(line) :
            continue
        print "\n-------------------------------------------------"
        print line
        #The word is split, sorted and \n is deleted
        line = list(line)
        
        line.sort()
        del_n(line)
         
        
        
       
        
       
        
        Compare_Word(line)
        print line
        print myTiles
        
        print "-------------------------------------------------\n"
        #i = raw_input("Break?")
      #  if ( i == "Y") :
       #     break
    
    
  


Getting_words()
print vals
#userch=raw_input("Enter a word")
#
#chekspace = userch.split()
#if len(chekspace) > 1:
#  print("Invalid word because it contains a whitespace")
#  #sys.exit()
#  
#if userch.isalpha():
#    pass
#else:
#    print("Only use English letters!!!")
#p=0   
#dictn=open("dictionary.txt")
#
#
#
#for word in dictn:
#    word=word.replace("\n","")
#    if userch.upper()==word:
