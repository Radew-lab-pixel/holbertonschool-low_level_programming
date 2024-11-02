#include "main.h"

/**
 * _string_toupper- append src to dest
 * @s  : string pointer str
 *
 * Return: s ( successful )
 *
 */
char *string_toupper(char *s)
{
	int length, count;

	length = _strlen(s; /* obtain of length of src */
	
	for (count = 0; count < length_src; count++)
	{
		dest[length_dest + count] = src[count];
	}
	return (dest);
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
