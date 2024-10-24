#include "main.h"

/**
 * print_last_digit - print the last digit  of the input n
 * @n : First operand input  n
 * Return: last digit  of input n as int r
 * Example:
 * _print_last_digit(-98) -> 8
 */

int print_last_digit(int n)
{
	int r;

	if (n > 0)
	{
		r = n % 10;
	}
	else if (n == -2147483648)
	{
		r = 2;
	}
	else
	{
		r = (n * -1) % 10;
	}
	_putchar (r + '0');
	return (r);
}
