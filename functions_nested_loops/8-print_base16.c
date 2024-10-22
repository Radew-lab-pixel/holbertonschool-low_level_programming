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
	char hexa[] = "0123456789abcdef";
	int i = 0;

while (i <= 15)
{
	putchar(hexa[i]);
	i++;
}
putchar('\n');
return (0);
}
