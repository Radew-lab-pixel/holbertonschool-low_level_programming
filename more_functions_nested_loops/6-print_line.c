#include "main.h"

/**
 * print_line - print line n times
 * @n  : integer input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_line(2) -> __
 **/

void print_line(int n)
{
	int i = 1;

	while ((i <= n) && (n != 0))
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
