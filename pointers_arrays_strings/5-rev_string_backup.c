#include "main.h"
/**
 * rev_string  - display and reverse  string by input
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : rev_string("Hello World")
 */

void rev_string(char *s);
{
	print_rev(s);
}

/**
 * print_rev  - display and reverse  string by input
 * function declaration performed in main.h
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : _print_rev("Hello World")
 */

void print_rev(char *s)
{
	int length, count;

	length = _strlen(s); /* length of s */

	for (count = length - 1; count >= 0; count--) /* count to start before '\0' thus length - 1 */
	{
		_putchar(s[count]);
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
