#include<stdio.h>
#include <cs50.h>
int main(void)
{
    printf("What is your name? ");
    char *x = NULL;
    scanf("%s", x);
    printf("hello, %s\n", x);
}