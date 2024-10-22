#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if n is negative,positive or zero'
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*comapare if n is 0, negative or positive  */
	if (n > 0)
	{	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{	printf("%d is negative\n", n);
	}
	else
	{	printf("%d is zero\n", n);
	}
	return (0);
}
