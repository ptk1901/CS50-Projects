from cs50 import get_float
while True:
    change = get_float('how much change is to be returned?\n')
    if(change>0):
        break
quarters_dollars = int(change)*4
x = float(change - int(change))
fractional_part = round(x , 3)

cents = int(fractional_part*100)

quarters = int(cents/25)
cents = cents - 25*quarters

dimes = int(cents/10)
cents = cents - 10*dimes

nickels = int(cents/5)
cents  = cents - 5*nickels

total_coins = cents + nickels + dimes + quarters + quarters_dollars
print(f'{total_coins}')