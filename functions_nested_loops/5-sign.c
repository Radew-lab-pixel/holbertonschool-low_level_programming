#include "main.h"

/**
 * print_sign - print the sign of the input n
 * @n : First operand n
 * Return: Always 1 ( n > 0 ), 0 ( n = 0 ) and -1 ( n < 0 )
 * Example:
 * print_sign(98) -> +1, 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	_putchar('-');
		return (-1);
	}
}
