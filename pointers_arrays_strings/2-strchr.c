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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
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

	return (0);
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