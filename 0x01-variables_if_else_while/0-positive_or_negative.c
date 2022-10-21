#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/*
 * main- Entry point
 *  Return: Always return 0
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* your code goes there */
	if (n > 0)
	{
		/* block of code to be executed if condition1 is true*/
		printf("%d, is positive \n", n);
		/*block of code to be executed if the condition1 is false*/
		printf("%d, is zero \n", n);
	}
	else
	{
		printf("%d, is negative \n", n);
	       /* block of code to be executed if the condition1 is false*/
	}
	return (0);
}
