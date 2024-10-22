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
int a = 0;

while (a <= 9)
{
	putchar('0' + a);
	a++;
}
putchar('\n');
return (0);
}
