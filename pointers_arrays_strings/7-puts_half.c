#include "main.h"

void _puts_halve(char *str);
/**
 * puts_half - display second half of string
 * @str : string pointer str
 *
 * Return : none
 *
 * Example : puts_halfway("Hello World")
 */

void puts_half(char *str)
{
	_puts_halve(str);
}
/**
 * _puts_halve - display string by input
 * function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts("Hello World")
 */

void _puts_halve(char *str)
{
	int count, half;

	int length = _strlen(str);

	half = length / 2;

	for (count = 0; count < half; count++)
	{
		_putchar(str[count + half]); /*start from second half of str */
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
