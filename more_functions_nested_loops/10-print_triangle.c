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
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				if ((column + row) >= (size + 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
