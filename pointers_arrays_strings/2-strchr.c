#include "main.h"
#include <stddef.h>

/**
 * _strchr - search for char c in string
 * and remove all characteres prior char c and
 * keep the rest after
 * @s : string pointer s
 * @c : string pointer c
 *
 * Return: s ( successful )
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /* current *s not equal 0 or '\0' */
	{
		if (*s == c) /* current *s matches char c */
		{
			return (s); /* return string s */
		}
		/*else */
		/* else increase s pointer address */

		s++;

	}


/* if ch is '\0', you should return */
/* the pointer to the `\0` of the string str */


	if (*s == c)
	{
		return (s);
	}

	return (NULL);
	/* return (NULL) */
}
