import csv
import sys

def main():

    # TODO: Check for command-line

    if len(sys.argv) != 3:

        print("Usage: python dna.py NAMEOFCSVFILE TXTFILE")

    # TODO: Read database file into a variable

    person = []

    with open(sys.argv[1]) as f:

        file_reader = csv.reader(f)
        for book in file_reader:
            person.append(book)

    # TODO: Read DNA sequence file into a variable

    with open(sys.argv[2]) as f:

        dna = f.read()
    # TODO: Find longest match of each STR in DNA sequence

    srt = person[0][1:]
    longest_srt_match = {}

    for i in range(len(srt)):

        longest_srt_match[srt[i]] = longest_match(dna, srt[i])

    #print(longest_srt_match)
    #print(person)
    #print(srt)
    #print(len(person[0]))

    # TODO: Check database for matching profiles
    for i in range(1 , len(person)):
        match = 0
        for j in range(1,len(person[0])):
            if int(person[i][j]) == longest_srt_match[person[0][j]]:
                match += 1
        if match == len(srt):
            print(person[i][0])
            return
    print('No Match')


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()












































# TODO: Check database for matching profiles
    #for i  in range(1 , len(person)):
    #    count = 0
    #    loopcounter = 0
    #    print(len(person[1])-1)
    #    while(loopcounter != len(person[1])-1):
    #        if (loopcounter == len(person[0])-1):
    #            break
    #        for j in range(1 , len(person[0])-1):
    #            if(person[i][j] != str(longest_srt_match[person[0][j]])):
    #                break
    #            else:
    #                loopcounter += 1
    #                break
    #    if(loopcounter == len(person[1])-1):
    #        print(person[i][0])
    #    else:
    #        print('no match')


