#include "main.h"

int cal_prime(int num);
/**
 * _is_prime_number - Entry point
 *
 * Description: 'find is n is prime number'
 * @n: input integer n
 * Return: integer value of of 0 or 1
 */

int is_prime_number(int n)

{
	/* if power value is 0 */
	if (y == 0)
	{
		return (1); /* return value 1 and terminate the recursion */
	}
	else if (y < 0)/* y can't be negative */
	{
		return (-1); /* return value -1 and terminate */
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}

}


int cal_prime(int num) 
{
	if (num == 0)
	{
		return (0); /* 0 is not or is prime */
	}
	
	else if (num == 2) 
	{
		return (1); /* 2 is prime */
	}
	else if (num / 2) 
	{
		return (0); /* 2 division is not prime */
	}
	else if ((num % i) == 0)
	{

	}
}
