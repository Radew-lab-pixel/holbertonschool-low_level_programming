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
	int count, half_whole, count_offset, half_remain;

	int length = _strlen(str);

	half_whole = length / 2; /*whole number of length /2 */
	half_remain = length % 2; /* remain of number of length /2 */

	if (half_remain != 0) /* the length is not in multipled of 2 - not perfect half */
	{
		count_offset = 1; /* count 1 address later */
	}
	else
	{
		count_offset = 0; /* keep original address */
	}
	for (count = count_offset; count < half_whole; count++)
	{
		_putchar(str[count + half_whole]); /*start from second half of str */
	}
	_putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
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
