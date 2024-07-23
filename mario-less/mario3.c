#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("dimension ");
    }
    while (x <= 0 || x > 8);
if(8<=x)
    {
      printf("       ");  for(int j=8;j<=x;j++)
    {
    printf("#");
    }
    printf("\n");
    }
if(7<=x)
  {printf("      ");  for(int j=7;j<=x;j++)
    {
    printf("#");
    }
printf("\n");}
if(6<=x)
  {printf("     ");  for(int j=6;j<=x;j++)
    {
    printf("#");
    }
printf("\n");}
if(5<=x)
  {printf("    ");  for(int j=5;j<=x;j++)
    {
    printf("#");
    }
printf("\n");}
if(4<=x)
  {printf("   ");  for(int j=4;j<=x;j++)
    {
    printf("#");
    }
printf("\n");
}
if(3<=x)
  {printf("  ");  for(int j=3;j<=x;j++)
    {
    printf("#");
    }
printf("\n");}
if(2<=x)
  {printf(" ");  for(int j=2;j<=x;j++)
    {
    printf("#");
    }
printf("\n");}

    for(int j=1;j<=x;j++)
    {
    printf("#");
    }
printf("\n");
}
