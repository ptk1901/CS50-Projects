#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  //int cc = get_int("what is cc number? ");
  double cc = get_double("what is cc number? ");
  int count = 0;
  do
  {
    cc /= 10;
    ++count;
  } while (cc > 1);

  printf("Number of digits: %d \n", count);
  int cc_number[count];
  while(num > 0) //do till num greater than  0
  {
      int mod = num % 10;  //split last digit from number
      printf("%d\n",mod); //print the digit.

      num = num / 10;    //divide num by 10. num /= 10 also a valid one
  }








  //if (strlen(cc_number)==15 || strlen(cc_number)==16 || strlen(cc_number)==13)
  //{
  //  if(luhn(cc_number)%10==0)
  //  {
  //    if((atoi(cc_number[0])== 3  && atoi(cc_number[1])== 4) || (atoi(cc_number[0])== 3 && atoi(cc_number[1])== 7))
  //          {printf("AMEX");}
  //    else
  //    {if((atoi(cc_number[0])== 5 && atoi(cc_number[1])== 1) || (atoi(cc_number[0])== 5 && atoi(cc_number[1])== 2) || (atoi(cc_number[0])== 5 && atoi(cc_number[1])== 3) || (atoi(cc_number[0])== 5 && atoi(cc_number[1])== 4) || (atoi(cc_number[0])== 5 && int(cc_number[1])== 5))
  //          {print('MASTERCARD')}
  //      else
  //      {if(int(cc_number[0]) == 4)
  //          {print('VISA')}}
  //  }
  //  }
  //  else
  //  {
  //  printf("invalid");
  //  }
  //}
  //else
  //{
  //  printf("invalid");
  //}
//
}





























































//int luhn(string cc_number)
//{
//  int len = strlen(cc_number);
//  int cc = atoi(cc_number);
//  int z;
//  for(int x=len-2; x>=0;x=x-2)
//  {
//    int m = atoi(cc_number[x])*2;
//    if (m>9)
//    {
//      int t, sum = 0, remainder;
//
//      t = m;
//
//      while (t != 0)
//      {
//         remainder = t % 10;
//         sum       = sum + remainder;
//         t         = t / 10;
//      }
//      z += sum
//    }
//    else
//    {
//      z+=m
//    }
//  }
//  for (int x=len-1; x>=0;x=x-2)
//  {
//    z += atoi(cc_number[x])
//  }
//  return z;
//}
//
//int main (void)
//{
//  string cc_number = get_string("what is cc number? ");
//  if (strlen(cc_number)==15 || strlen(cc_number)==16 || strlen(cc_number)==13)
//  {
//    if(luhn(cc_number)%10==0)
//    {
//      if((atoi(cc_number[0])== 3  && atoi(cc_number[1])== 4) || (atoi(cc_number[0])== 3 && atoi(cc_number[1])== 7))
//            {printf("AMEX");}
//      else
//      {if((atoi(cc_number[0])== 5 && atoi(cc_number[1])== 1) || (atoi(cc_number[0])== 5 && atoi(cc_number[1])== 2) || (atoi(cc_number[0])== 5 && atoi(cc_number[1])== 3) || (atoi(cc_number[0])== 5 && atoi(cc_number[1])== 4) || (atoi(cc_number[0])== 5 && int(cc_number[1])== 5))
//            {print('MASTERCARD')}
//        else
//        {if(int(cc_number[0]) == 4)
//            {print('VISA')}}
//    }
//    }
//    else
//    {
//    printf("invalid");
//    }
//  }
//  else
//  {
//    printf("invalid");
//  }
//
//
//}
//




