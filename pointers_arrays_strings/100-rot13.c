#include "main.h"

char _rot13Cal(char a);

/**
 * rot13 - add 13 rolls to char
 * @s  : string pointer s
 *
 * Return: char* s
 *
 */

char *rot13(char *s)
{
	int length, count;
	/*char result;*/

	length = _strlen(s); /* obtain of length of src */

	/* match_detected = 0,  flag to detect if match */

	/* detect if the both length not matching to prevent overflow */

	/* count from 0 to length */

	for (count = 0; count < length; count++)
	{

		s[count] = _rot13Cal(s[count]);
		/* called in housel function */

		/* result == \0 ( mismatch or end of line) */
		if (s[count] == '\0')
		{
			return (s); /* exit early and return result */
		}
	}
	return (s); /* reach end of length , return result ( mostly 0 )*/
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
 * _rot13Cal - perfrom rot13 on char a
 *
 * @a : string pointer to a
 *
 * Return: char array
 *
*/

char _rot13Cal(char a)
{
	/* A - 65 ascii , Z - 90 ascii */
	char result;
	int UpperCase = 0; /* if uppercase */
	int isAlpha = 0; /* if alphabet */

	/* check a if is alphabet */
	if ((a >= 'A') && (a <= 'Z'))
	{
		isAlpha = 1;
		UpperCase = 1; /* is UpperCase*/
	}
	else if ((a >= 'a') && (a <= 'z'))
	{
		isAlpha = 1;
		UpperCase = 0; /*is not UpperCase*/
	}
	else
	{
		isAlpha = 0; /* not alphabet */
	}


	if (isAlpha == 1) /* if Alphabet */
	{
		if (UpperCase == 0) /* if not upper case */
		{
			/* convert to upper case for easier calculation */
			a = a - 32;
		}
		result = a + 13; /* apply ROT13 */

		if (result > 'Z') /* ROT13 exceed 'Z' */
		{
			result = result - 26;
		}
		/* wrap around from Z to A - 26 alphabets backward*/
		if (UpperCase == 0) /* if s is not upper case */
		{
			/* convert to lower case */
			result = result + 32;
		}
	}
	else /* not Alphalbet */
	{
		result = a;
	}

	return (result);
}
