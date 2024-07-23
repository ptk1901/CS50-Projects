#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
string text= get_string("Text: ");
float l = count_letters(text);
float m = count_words(text)+1.0;
float n = count_sentences(text);
float L = (l/m) * 100.0;
float S = (n/m) * 100;
int grade = round(0.0588*L - 0.296*S - 15.8);
if (1<= grade && grade<=16)
{
printf("Grade %i\n", grade);
}
else if (grade<1)
{
  printf("Before Grade 1\n");
}
else
{
  printf("Grade 16+\n");
}

}

int count_letters(string text)
{
int numberofalphabets=0;
for (int x=0; x<strlen(text); x++)
{
  if(isalpha(text[x]))
  {
    numberofalphabets++;
  }
}
return numberofalphabets;
}

int count_words(string text)
{
int numberofwords=0;
for (int x=0; x<strlen(text); x++)
{
  if(isspace(text[x]))
  {
    numberofwords++;
  }
}
return numberofwords;
}

int count_sentences(string text)
{
  int numberofwords=0;
for (int x=0; x<strlen(text); x++)
{
  if(text[x]== 46)
  {
    numberofwords++;
  }
    if(text[x]== 33)
  {
    numberofwords++;
  }
  if(text[x]== 63)
  {
    numberofwords++;
  }
}
return numberofwords;
}