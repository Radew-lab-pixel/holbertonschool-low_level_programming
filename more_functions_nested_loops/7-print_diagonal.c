#include "main.h"

/**
 * print_diagonal  - print diagonal line n times
 * @n  : integer input
 *
 * Return: none  ( Successful )
 *
 * Example : print_diagonal(2)
 **/

void print_diagonal(int n)
{
	int i, j;

	if ( n > 0 ) /* go through the process only if n > 0*/
	{
		for (i = 1; i <= n; i++) /*n number of lines*/
		{
			for (j = 1; j <= n; j++) /*n number of the spacing*/
			{
				if (j == i) /*j line spacing counter is equal to number of line counter i*/
				{
					_putchar('\\');
				}
				else /*if j not reaching i counter, add space*/
				{
					_putchar(' ');
				}
			} /*end for*/

			_putchar('\n'); /*add a new line*/
		} /*end for*/
	}
	else /* if n < 0 , print a newline only */
	{
		_putchar('\n');
	}
}
