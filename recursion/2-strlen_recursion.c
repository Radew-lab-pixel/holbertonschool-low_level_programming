#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: 'take input string and find the length of string'
 * @s: input string
 *
 * Return: integer value of length(Success)
 */

int _strlen_recursion(char *s)
{
	/* s is end of line */
	if (*s == '\0')
	{
		return (0);  /* add 0 and exit */
	}
	/* add 1 to recursion everytime */
	return (1 + _strlen_recursion(s + 1));
}
