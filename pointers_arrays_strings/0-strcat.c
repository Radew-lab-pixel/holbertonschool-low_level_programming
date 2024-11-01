#include "main.h"

/**
 * _strcat - append src to dest
 * @src  : string pointer str
 * @dest : string pointer dest
 *
 * Return: dest ( successful )
 *
 */

char *_strcat(char *dest, char *src)
{
	int length_dest, length_src, count;

	length_src = _strlen(src); /* obtain of length of src */
	length_dest = _strlen(src); /* obtain length of dest */

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
