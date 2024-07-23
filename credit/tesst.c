// C program to demonstrate conversion of
// char to int using sscanf()
#include <stdio.h>
#include<cs50.h>
// Driver code
int main()
{
    string cc_number = get_string("what is cc number? ");
	const char* s = "136";
	int x;
	sscanf(&cc_number[2], "%d", &x);
	printf("\nThe integer value of x is %d ", x);
	return 0;
}
