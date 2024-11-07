#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: 'take input number and calculate the factorial'
 * Formula: factorial(n) =  n * factorial (n -1 )
 * @n: input integer n
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	/* n is 1 meant reach top  of the stacks */
	/* n is 0 meant int n originally is 0 */
	if ((n == 1) || (n == 0))
	{
		return (1); /* return 1 as factorial(1)*/
	}
	else if (n < 0)
	{
		return (-1); /* return -1 */
	}
	else
	{
	/* (n-1) cannot be negative thus if such value is ommitted in recursion */
	return (n * factorial(n - 1));
	}
}
