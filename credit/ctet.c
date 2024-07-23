#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
int main (int argc, char** argv)
{
     string cc_number = get_string("what is cc number? ");
     printf("%s \n", cc_number);
     int num[100];
     int i = 0;
     while(cc_number[i] != '\0')
     {
        num[i] = cc_number[i];
        printf("%s \n %d \n" , &cc_number[i], num[i]);
        i++;
     }
     printf("%d\n %d \n %d \n %d", num[0],num[1],num[2],num[3]);




















     //int x = atoi(&cc_number[1]);
     //int y = atoi(&cc_number[2]);
     //int z = atoi(&cc_number[0]);
     //printf("%d\n", x);
     //printf("%d\n", y);
     //printf("%d\n", z);
     //printf("%d \n" , x+y);
    return 0;
}










