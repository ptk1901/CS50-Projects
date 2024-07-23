#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if(argc==1 || argc>2)
    {
        printf("Error more than 2 command line arg\n");
        return 1;
    }
    if(strlen(argv[1])<26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int x=0; x< strlen(argv[1]); x++)
    {
        if(isalpha(argv[1][x]) == 0)
        {
        printf("error non alphabets\n");
        return 1;
        }
    }
    for(int x = 0; x<strlen(argv[1]); x++)
    {
       for (int j = x+1; j<strlen(argv[1]);j++)
       {
           if (argv[1][x]==argv[1][j])
           {
               printf("error\n");
               return 1;
           }
       }
    }

string plaintext = get_string("plaintext: ");
printf("ciphertext: ");
for(int x=0 , ascii =plaintext[x];x<strlen(plaintext);x++)
{

    if(isalpha(plaintext[x]))
    {
        if(isupper(plaintext[x]))
        {
        plaintext[x] = toupper(argv[1][plaintext[x]-65]);
        printf("%c", plaintext[x]);
        }
        else
        {
        plaintext[x] = (argv[1][plaintext[x]-97]);
        printf("%c", tolower(plaintext[x]));
        }
    }
    else
    {
        printf("%c",plaintext[x]);
    }
}
 printf("\n");

}







