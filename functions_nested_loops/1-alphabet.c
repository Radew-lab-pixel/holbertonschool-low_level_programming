#include "main.h"

/* more headers goes there */

/**
 * print_alphabet - Entry point
 *
 * Description: print a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
