#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 *a Description: 'z-a display  '
 * 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'z';

while (a >= 'a')
{
	putchar(a);
	a--;
}
putchar('\n');
return (0);
}
