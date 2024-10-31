#include "main.h"

void _puts_2x(char *str);

/**
 * puts2 - display every other character of a string
 * starting with the first character
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
 * _puts_2x - every second vhar in  string by input
 * Function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts_2x("123456789") -> 13579
 */
void _puts_2x(char *str)
{
	int length, count;

	length = _strlen(str);

	for (count = 0; count < length; (count = count + 2))
	{
		_putchar(str[count]);
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
