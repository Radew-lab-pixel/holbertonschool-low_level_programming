#include "main.h"

int _charCal(char a, char b);

/**
 * _strcmp - compare s1  and s2
 * @s1  : string pointer s1
 * @s2 : string pointer s2
 *
 * Return: 0 ( successful )
 * > 0 if s1 > s2
 * < 0 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int length_s1, length_s2, length, count;
	int result;

	length_s1 = _strlen(s1); /* obtain of length of src */
	length_s2 = _strlen(s2); /* obtain length of dest */

	/* match_detected = 0,  flag to detect if match */

	/* detect if the both length not matching to prevent overflow */

	if (length_s1 >= length_s2)
	{
		length = length_s2; /* assign length_s2 to length */
	}
	else
	{
		length = length_s1; /* assign length_s1 to length */
	}

	/* count from 0 to length */

	for (count = 0; count < length; count++)
	{

		result = _charCal(s1[count], s2[count]);
		/* called in house charCal function */

		/* result != 0 ( mismatch) */
		if (result != 0)
		{
			return (result); /* exit early and return result */
		}
	}
	return (result); /* reach end of length , return result ( mostly 0 )*/
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
 *  _charCal - integer difference between s1 and s2
 * Description:  integer difference between s1 and s2
 * return the difference
 *
 * @a : string pointer to s1
 * @b : string pointer to s2
 *
 * Return: 0 ( successful )
 * else difference value
 *
 * Example : _charCal(s1, s2)
*/


int _charCal(char a, char b)
{
	int int_a, int_b;

	int_a = a - '0';
	/*convert s1 (ASCII char) to integer*/
	int_b = b - '0';

	/* a and b matched */
	if (int_a == int_b)
	{
		return (0);
	}
	else
	{
		return (int_a - int_b);
	}
}
