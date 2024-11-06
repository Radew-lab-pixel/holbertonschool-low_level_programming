#include "main.h"

/**
 * _strstr - find needle  in haystack
 * @haystack  : string pointer search target
 * @needle: string pointer  to be based on
 * Return: char haystack match else 0 if no match
 */

char *_strstr(char *haystack, char *needle)
{
	int count;
	int match = 0;
	int length = _strlen(needle);

	if (length == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{	count = 0; /* reset count to 0 */
		if (haystack[count] == needle[count])
		{
			match = 1;
			count = 1;

			while ((count < length) && (match == 1))
			{
				if (haystack[count] == needle[count])
				{
					count++;
					match = 1; /* reaffirm match is found */
				}
				else
				{
					match = 0; /* match reset to 0 */
				}
			}
			if ((count == length) & (match == 1))
			{
				return (haystack);
			}
		}
		haystack++;
	}
	if (*haystack == '\0')
	{
		return (0);
	}
	return (haystack);
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
