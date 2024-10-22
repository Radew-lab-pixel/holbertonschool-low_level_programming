#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: ' program that prints _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i = 8; /*length of c[] */

	while (i <= 8)
	{
		putchar(c[i]);
		i++;
}
return (0);
}
