#capitalize the word if it begins with a lower case letter
#else do nothing 
word = str(input()) 
if len(word)<1000  : 
  print(word[0].capitalize() + word[1:])
  
