from cs50 import get_int
while True:
  height = get_int('What are the dimensions of the pyramid? \n')
  if(height>0 and height<=8):
    break
for x in range(height):
  for l in range(height-1, x, -1):
    print(" ", end="")
  for m in range(0, x+1, 1):
    print("#" , end="")
  print('  ', end='')
  for n in range(x+1):
    print('#', end='')
  print('')