#include "main.h"

/**
 * print_square - print square n times
 * @size  : integer input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_square(2)
 **/

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (j = 0; j < size; j++) /* number of row loop */
		{
			for (i = 0; i < size; i++) /* number of space # loop */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
