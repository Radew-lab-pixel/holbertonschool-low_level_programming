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
	int space_count, hex_count;

	if (size > 0)
	{
		for (j = 0; j < size; j++) /* number of row loop */
		{
			for (i = 0; i < size; i++) /* number of # loop */
			{
				for (space_count = 0; space_count < (size - 1); space_count++) /* number of space */
				{
					_putchar(' ');
				}

				for (hex_count = size; hex_count > 0; hex_count--)
				{
					_putchar('#');

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

