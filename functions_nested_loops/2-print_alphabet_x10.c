#include "main.h"

/* more headers goes there */

/**
 * print_alphabet - Entry point
 *
 * Description: print a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
	a = 'a';
	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
	}
}

