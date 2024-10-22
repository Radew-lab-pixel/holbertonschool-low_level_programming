#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'a-z display  except q and e '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
	if (a != 'q' || a != 'e')
	{
	putchar(a);
	}
	a++;
}
putchar('\n');
return (0);
}
