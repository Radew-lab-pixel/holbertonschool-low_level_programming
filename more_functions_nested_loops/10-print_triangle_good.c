#include "main.h"

/**
 * print_triangle - print triangle n times
 * @size  : integer input
 *
 * Return: none
 *
 * Example : print_triangle
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k;

	if (size > 0)
	{
		while (i < size) /** number of rows */
		{	
			j=0;
			while (j < size) /* number of column */
			{
				for (k = 0; k < size; k++) /* no. of spaces */
				{
					_putchar(' ');
				}
				for (k = 0; k < i; k++) /* no. of # */
				{
					_putchar('#');
				}

				j++;
				}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

