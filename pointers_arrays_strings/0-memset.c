#include "main.h"

/**
 * _memset - alter the array s  detail with char b data
 * @s  : string pointer str s
 * @b : char b to eplaced with
 * @n : array range that to be altered
 * Return: s ( successful )
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	/*length = _strlen(s); */
	/* obtain of length of array s */

	/* unsigned int unsigned_length = (unsigned int) length; */

	if ((int) n > 0) /* failsafe to check <= length*/
	{
		for (count = 0; count < (int) n; count++)
		{
			s[count] = b; /* replace s[count] with char b */
		}
	}

	return (s);
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
