#include "main.h"

/**
 * _memcpy - copy n number of array from src to dest
 * @src  : string pointer str src
 * @dest : string pointer str dest
 * @n : array range that to be altered
 * Return: s ( successful )
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count;

	if ((int) n > 0) /* failsafe to check n > 0*/
	{
		for (count = 0; count < (int) n; count++)
		{
			dest[count] = src[count]; /* replace s[count] with char b */
		}
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
