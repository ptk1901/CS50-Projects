import sys
import csv
person = []
with open(sys.argv[1]) as f:
    file_reader = csv.reader(f)
    for book in file_reader:
        person.append(book)
print(person)
print(len(person[0]))
for j in range(1,len(person)-1):
    srt = person[1][j]
print(person[AATG])