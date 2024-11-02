#include "main.h"

char _charToUpper(char a);

/**
 * string_toupper - lowercse to uppercase
 * @s  : string pointer s
 *
 * Return: string s
 */

char *string_toupper(char *s)
{
	int length, count;
	/* char result; */

	length = _strlen(s); /* obtain of length of s */

	/* count from 0 to length */

	for (count = 0; count < length; count++)
	{
		s[count] = _charToUpper(s[count]);
	}
	return (s); /* return result */
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

/**
 *  _charToUpper - convert lowercase char to uppercase
 * Description:  convert lowercase to uppercase
 * return uppercase value
 *
 * @a : char a
 *
 * Return: b as uppercase
 *
 * Example : _charToUpper(a)
*/


char _charToUpper(char a)
{
	char b;

	/*a between 'a' and 'z' */
	if ((a >= 'a') && (a <= 'z'))
	{
		b = a - 32; /* convert a to uppercase (32 different) */
	}
	else
	{
		b = a; /* save a to be as a is uppercase */
	}
	return (b);
}
