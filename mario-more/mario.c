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


        for(int l=0; l<x; l++)
    {
        for (int m=x-1;m>l; m--)
        {
          printf(" ");
        }
        for(int m=0; m<=l;m++)
        {
            printf("#");
        }
        printf("  ");
        for(int m=0; m<=l;m++)
        {
            printf("#");
        }
     printf("\n");
    }
}
