#include "main.h"

/**
 * times_table - print 9 times table starting with 0
 * @void : void operand input
 * Return: none
 * Example:
 * times_table()
 *
 **/

void times_table(void)
{
	int i;
	int j;
	int result;

	int whole, remain;

	for (i = 0; i <= 9; i++)
	{
		j = 0;

		while (j <= 9)
		{
			result = i * j;
			whole = result / 10;
			remain = result % 10;

			if (result <= 9)
			{
				if (j > 0)
				{
				_putchar(' ');
				}
			}
			else
			{
			_putchar(whole + '0');
			}
			_putchar(remain + '0');

			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
	}
}
