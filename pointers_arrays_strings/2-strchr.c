#include "main.h"

/**
 * _strchr - search for char c in string
 * and remove all characteres prior char c and
 * keep the rest after
 * @s  : string pointer s
 * @c : string pointer c to llo for
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
		else /* else increase s pointer address */
		{
		s++;
		}
	}

	if (*s == '\0') /* current *s is '\0' */
	{
		return ('\0');
	       	/* return (s); */
		/* return string s */
	}




		/**
		* if (char_found == 1)
		* {
		*	s[found_count] ='\0';
		*	return (s);
		* }
		*
		* else
		* {
		*	return (s='\0');
		* }
		*/

	return (s); /* return NULL */
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
