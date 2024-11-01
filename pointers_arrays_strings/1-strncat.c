#include "main.h"

/**
 * _strncat - append src to dest depend on n
 * @src  : string pointer str
 * @dest : string pointer dest
 * @n : integer n
 *
 * if n is larger the src[count],
 * src[count] will be used
 * Return: dest ( successful )
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_dest, length_src, count;

	length_src = _strlen(src); /* obtain of length of src */
	length_dest = _strlen(dest); /* obtain length of dest */
	if (n > length_src) /* if n larger than length_src */
	{ /* append src to dest */
		for (count = 0; count < length_src; count++)
		{
			dest[length_dest + count] = src[count];
		}
	}
	else /* n < length_Src */
	{
		/* append src[n] to dest */
		for (count = 0; count < n; count++)
		{
			dest[length_dest + count] = src[count];
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
