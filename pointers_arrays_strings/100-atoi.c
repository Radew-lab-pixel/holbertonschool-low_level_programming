#include "main.h"

char *_strcompare(char *dest, char *src);
/**
*_atoi - extract integer from input s
* 
* @src : str point array input s 
*
* Return: int integer value (Success)
*
*/
int _atoi(char *s)
{

}

/**
* *_strcompare - compare src and update dest if int
* @dest  : string pointer dest, output as string for integer detect4ed from str
* @src : str point array src
*
* Return: Always @dest (Success)
*
*/

char *_strcompare(char *dest, char *src)
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
