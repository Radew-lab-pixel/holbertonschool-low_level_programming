#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: 'take input string and put new line'
 * @s: input string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	/* s is end of line */
	if (*s == '\0')
	{
		_putchar('\n'); /*newline*/
		return; /* exit */
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
