#include "main.h"

/**
 * _puts_recursion : print string followed by a new line
 *
 * Description : take char *s and print new line
 *
 * @s : input parameter string s
 *
 * Return : void (Always)
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
