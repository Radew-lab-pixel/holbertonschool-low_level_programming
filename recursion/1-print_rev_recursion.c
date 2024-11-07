#include "main.h"

/**
 * _puts_rev_recursion - Entry point
 *
 * Description: 'take input string and print reverese line'
 * @s: input string
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	/* s is end of line */
	if (*s == '\0')
	{
		return; /* exit */
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
