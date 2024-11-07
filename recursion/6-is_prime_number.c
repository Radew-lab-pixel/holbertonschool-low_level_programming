#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: 'take input x  and raise it to power of y'
 * @x: input integer x of root value
 * @y: input integer y of power value
 * Return: integer value of result
 */

int _pow_recursion(int x, int y)
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
