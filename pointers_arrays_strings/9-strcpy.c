#include "main.h"

/**
* *_strcpy - copy both arrays
* @dest  : string pointer dest, to be copied from src
* @src : str point array src
*
* Return: Always @dest (Success)
*
*/

char *_strcpy(char *dest, char *src)
{
	int count, length;

	length = _strlen(src);

	/** char *start = dest; **/

	count = 0;

	while (count < length)
	{
		*(dest + count) = *(src + count);
		count++;
	}

	*(dest + count) = '\0';
	return (dest);
}

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
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
