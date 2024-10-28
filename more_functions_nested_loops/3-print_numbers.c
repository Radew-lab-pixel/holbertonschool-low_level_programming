#include "main.h"

/**
 * print_numbers - print number 0 to 9
 * @void  : none input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_numbers()  -> 0 .. 9
 **/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar(' ');

}
