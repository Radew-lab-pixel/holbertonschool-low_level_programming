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
	int count;
	/* char result; */

	/*length = _strlen(s); */
	/*obtain of length of s */

	/* count from 0 to length */

	/*for (count = 0; count < length; count++)*/
	for (count = 0; s[count] != '\0'; count++)
	{
		s[count] = _charToLeet(s[count]);
	}
	return (s); /* return result */
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
