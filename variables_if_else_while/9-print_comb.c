#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: '0-15 display in hexadecimal using Array '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

while (i <= 15)
{
	putchar('0' + i);
	putchar('\t');
	i++;
}
putchar('\n');
return (0);
}
