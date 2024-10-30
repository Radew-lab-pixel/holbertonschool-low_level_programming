#include "main.h"

void _puts_2x(char *str);

/**
 * puts2 - display every other character of a string, starting with the first character
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts2("123456789")
 */

void puts2(char *str)
{
	_puts_2x(str);
}

/**
 * _puts_2x - display string if of multiple 2  by input
 * Function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts_2x("123456789")
 */
void _puts_2x(char *str)
{
	int length, count, remain;

	length = _strlen(str);

	for (count = 0; count < length; count++)
	{
		remain = (str[count]) % 2; /* modulus 2 */
		if (remain == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
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
