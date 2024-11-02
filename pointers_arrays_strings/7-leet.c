#include "main.h"

char _charToLeet(char a);

/**
 * leet -  convert string to leet value
 * @s  : string pointer s
 *
 * Return: string s
 */

char *leet(char *s)
{
	int length, count;
	/* char result; */

	length = _strlen(s); /* obtain of length of s */

	/* count from 0 to length */

	for (count = 0; count < length; count++)
	{
		s[count] = _charToLeet(s[count]);
	}
	return (s); /* return result */
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

/**
 *  _charToLeet - convert char to Leet style
 * Description:  convert char to Leet
 * return leet value
 *
 * @a : char a
 *
 * Return: result as converted leet value if leet
 * else return a
 *
 * Example : _charToLeet(a)
*/

char _charToLeet(char a)
{
	char reference[5] = "aeotl";
	char leet[5] = "43071";

	int count;

	for (count = 0; count < 5; count++)
	{
		/* match found for leet conversion */
		if ((a == reference[count]) || ((a - 32) == reference[count]))
		{
			return (leet[count]); /*return leet value*/
		}
	}
	return (a); /* return a (unchanged */
}
