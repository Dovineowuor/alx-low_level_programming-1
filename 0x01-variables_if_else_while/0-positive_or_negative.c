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
	int m;

	m = n % 10;

	if (m > 0)
	{
		/* block of code to be executed if condition1 is true*/
		printf("The last digits of %d is %d and is greater than 5\n", n, m);
	}
	if (m == 0)
	{
		/*block of code to be executed if the condition1 is false*/
		printf("The last digits of %d is %d and is 0\n", n, m);
	}
	if (m < 0 && m != 0)
	{
		printf("The last digits of %d is %d and is less than 6 and not 0\n", n, m); 
		/* block of code to be executed if the condition1 is false*/
	}
	return (0);
}
