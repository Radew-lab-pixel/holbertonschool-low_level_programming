#include "main.h"

/* more headers goes there */

/**
 * void print_alphabet _x10(void)- Entry point
 *
 * Description: print a to z 10 times`:wq
 *
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

