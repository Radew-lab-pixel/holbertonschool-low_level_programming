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
		for (row = 1; row <= size; row++) /* no, of rows */
		{
			for (column = 1; column <= size; column++) /*no, of column */
			{
				if ((column + row) >= (size + 1)) /* sum of column and row is greater than size */
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
