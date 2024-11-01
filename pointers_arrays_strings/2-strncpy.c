#include "main.h"

/**
 * _strncpy - copy src to dest depend on n
 * @src  : string pointer str
 * @dest : string pointer dest
 * @n : integer n
 *
 * if n is larger the src[count],
 * remainder dest[count] will be filled with '\0'
 * Return: dest ( successful )
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length_src, count;

	length_src = _strlen(src); /* obtain of length of src */
	/*length_dest = _strlen(dest);*/  /* obtain length of dest */
	if (n > length_src) /* if n larger than length_src */
	{ /* copy src to dest */
		for (count = 0; count < length_src; count++)
		{
			dest[count] = src[count];
		}
		/* Add '\0' to remaining dest[n] */
		while (count < n)
		{
			dest[count] = '\0';
			count++;
		}
	}
	else /* n < length_Src */
	{
		/* copy only  src[n] to dest */
		for (count = 0; count < n; count++)
		{
			dest[count] = src[count];
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
