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
char a;

for (a = 'a'; a <= 'z'; a++)
{ 
	putchar(a);
	putchar('\n')
}
return (0);
}
