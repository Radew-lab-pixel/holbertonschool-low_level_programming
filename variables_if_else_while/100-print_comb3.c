#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'count 00 - 89 without duplicate '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	int count = 0;

	for (i = 0 ; i <= 9; i++)
	{
		j = 1 + count;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			j++;
			if (count != 8) 
			{
				putchar(',');
				putchar(' ');
			}
		}
		count++;
	}
	return (0);
}
