#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: '0-9 display '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

while (i <= 9)
{
	putchar(i);
	putchar(',');
	putchar(' ');
	i++;
}
putchar('\n');
return (0);
}
