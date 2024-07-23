from cs50 import get_string
def count_letters(text):
    noofalpha=0
    for x in text:
        if(x.isalpha() == True):
            noofalpha+=1
    return int(noofalpha)
def count_words(text):
    noofwords = 0
    for x in text:
        if (x.isspace()) == True:
            noofwords+=1
    noofwords+=1
    return int(noofwords)
def count_sentences(text):
    noofsent=0
    for x in text:
        if (x.find(chr(63)) != -1):
            noofsent+=1
        if (x.find(chr(46)) != -1):
            noofsent+=1
        if (x.find(chr(33)) != -1):
            noofsent+=1
    return int(noofsent)


text = get_string('Text: ')
l = count_letters(text)
m = count_words(text)
n = count_sentences(text)
L = (l/m)*100
S = (n/m)*100
grade = round(0.0588*L - 0.296*S - 15.8)
if (1<= grade and grade<=16):
    print(f"Grade {grade}")
elif(grade<1):
    print("Before Grade 1")
else:
    print("Grade 16+")
