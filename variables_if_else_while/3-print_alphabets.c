#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'a-z display  '
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
	putchar(a);
	a++;
}
a = 'A';

while (a <= 'Z')
{
	putchar(a);
	a++;
}
putchar('\n');
return (0);
}