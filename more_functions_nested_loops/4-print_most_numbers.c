#include "main.h"

/**
 * print_most_numbers - print number 0 to 9 except 2 and 4
 * @void  : none input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_numbers()  -> 0 .. 9
 **/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');

}
