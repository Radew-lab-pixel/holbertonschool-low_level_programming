#include "main.h"

/**
 * _puts - display string by input
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts("Hello World")
 */

void _puts(char *str)
{
	int length, count;

	length = _strlen(str);

	for (count = 0; count < length; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}

/**
 * _strlen - check the length of string
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
