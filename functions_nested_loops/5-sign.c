#include "main.h"

/* more headers goes there */

/**
 * function print_sign - Entry point c
 *
 * Paramter n - entry point n
 *
 * Description: print the sign of the number
 *
 * Return: Always 1 ( > 0 ), 0 ( = 0 ) and -1 ( < 0 ) 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else 
	{	
		return (-1);
	}	


}
