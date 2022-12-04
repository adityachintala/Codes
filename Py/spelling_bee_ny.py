import re

def is_word(word, x):
    word = word.lower()
    for i in word:
        if(i not in x):
            return False
    return True
    
file = open("/usr/share/dict/words", "r")
words = re.sub("[^a-z]", " ",  file.read()).split()
file.close()
x = list(input("Enter letters with space: ").lower())
k = input("Enter compulsary letter : ").lower()
for i in words:
    if(k in i) and (is_word(i,x)):
        if(len(i) > 3): 
            print(i) 