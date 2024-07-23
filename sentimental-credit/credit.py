from cs50 import get_string
def luhn(cc_number):
    n=len(cc_number)
    l=0
    sum = 0
    for x in range(n-2,-1,-2):
            m = int(cc_number[x])*2
            if (m>9):
                a = str(m)
                m = int(a[0]) + int(a[1])
                l += m
            else:
                 l += int(m)
    for z in range (n-1,-1,-2):
        sum += int(cc_number[z])
    return int(sum+l)
cc_number = get_string('what is the cc number?')

if (len(cc_number) == 15 or len(cc_number) == 16 or len(cc_number) == 13):
    if(luhn(cc_number)%10==0):
        if((int(cc_number[0])== 3  and int(cc_number[1])== 4) or (int(cc_number[0])== 3 and int(cc_number[1])== 7)):
            print('AMEX')
        elif((int(cc_number[0])== 5 and int(cc_number[1])== 1) or (int(cc_number[0])== 5 and int(cc_number[1])== 2) or (int(cc_number[0])== 5 and int(cc_number[1])== 3) or (int(cc_number[0])== 5 and int(cc_number[1])== 4) or (int(cc_number[0])== 5 and int(cc_number[1])== 5)):
            print('MASTERCARD')
        elif(int(cc_number[0]) == 4):
            print('VISA')
        else:
            print('INVALID')
    else:
        print('INVALID')
else:
    print('INVALID')



#def luhn(cc_number):
#    n=len(cc_number)
#    l=0
#    sum = 0
#    if n%2!=0:
#        for x in range(n-2,0,-2):
#            m = int(cc_number[x])*2
#            if (m>9):
#                n = str(m)
#                m = int(n[0]) + int(n[1])
#                l += m
#            else:
#                l += int(m)
#
#    else:
#         for x in range(n-2,-1,-2):
#            m = int(cc_number[x])*2
#            if (m>9):
#                n = str(m)
#                m = int(n[0]) + int(n[1])
#                l += m
#            else:
#                l += int(m)
#
#    if len(cc_number) % 2 == 0:
#
#        for i in range(0,len(cc_number)):
#       # Converting char to int
#
#            if int(i)%2!=0:
#
#               sum = sum + int(cc_number[int(i)])
#            #    print(sum)
#
#    else:
#        for i in range(0,len(cc_number)):
#
#                # Converting char to int
#            if int(i) % 2 == 0:
#                sum = sum + int(cc_number[int(i)])
#    return int(sum+l)
#
#cc_number = input('what is the cc number?')
#if (len(cc_number) == 15 or len(cc_number) == 16 or len(cc_number) == 13):
#    if(luhn(cc_number)%10==0):
#        if((int(cc_number[0])== 3  and int(cc_number[1])== 4) or (int(cc_number[0])== 3 and int(cc_number[1])== 7)):
#            print('american express')
#        elif((int(cc_number[0])== 5 and int(cc_number[1])== 1) or (int(cc_number[0])== 5 and int(cc_number[1])== 2) or (int(cc_number[0])== 5 and int(cc_number[1])== 3) or (int(cc_number[0])== 5 and int(cc_number[1])== 4) or (int(cc_number[0])== 5 and int(cc_number[1])== 5)):
#            print('mastercard')
#        elif(int(cc_number[1]) == 4):
#            print('visa')
#        else:
#            print('invalid')
#    else:
#        print('invalid')
#else:
#    print('invalid')