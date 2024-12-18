#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a  : 2D array with 8 columns
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	/* length of first row or number of column */
	int length = _strlen(a[0]);

	int row = 0;
	int column = 0;

	if (length < 8) /* failsafe if length is not 8 */
	{
		return;
		/* return  and exit */
	}
	while (row < 8)
	{
		column = 0; /*column reset to 0 */
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
	return;  /*successful */
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
