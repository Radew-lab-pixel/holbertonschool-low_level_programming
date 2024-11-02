#include "main.h"

char _charToUpper(char a);
int _isSeperator(char a);

/**
 * string_toupper - lowercse to uppercase
 * @s  : string pointer s
 *
 * Return: string s
 */

char *cap_string(char *s)
{
	int length, count;

	/* char result */

	int sep_detected = 0;

	int next_sep_detected = 0;

	length = _strlen(s);

	/* obtain of length of s */

	/* count from 0 to length */
	s[0] = _charToUpper(s[0]); /* first array to capital */

	count = 1;

	while (count <= length)
	{
		/* detect current char if seperator */
		sep_detected = _isSeperator(s[count]);

		/*s[count] = ' ';*/
			/* replace current with space */
		/* jump to next array */
		next_sep_detected = _isSeperator(s[count + 1]);

		/** check current is but next array is not seperator */
		if ((sep_detected == 1) && (next_sep_detected == 0))
		{
		/* confirmed next array is not seperator */

			s[count + 1] = _charToUpper(s[count + 1]);
			sep_detected = 0; /* reset the flag */
			count++;
		}
		count++;
	}
	return (s); /* return result */
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s : char pointer s
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
 *  _charToUpper - convert lowercase char to uppercase
 * Description:  convert lowercase to uppercase
 * return uppercase value
 *
 * @a : char a
 *
 * Return: b as uppercase
 *
 * Example : _charToUpper(a)
*/


char _charToUpper(char a)
{
	char b;

	/*a between 'a' and 'z' */
	if ((a >= 'a') && (a <= 'z'))
	{
		b = a - 32; /* convert a to uppercase (32 different) */
	}
	else
	{
		b = a; /* save a to be as a is uppercase */
	}
	return (b);
}

/**
 * _isSeperator - find it current input is a seperator
 * Decription : find seperator
 * @a : char a
 *
 * Return: 1 if seperator found
 * else 0
 * Seperator : space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }
 */

int _isSeperator(char a)
{
	int result;

	switch (a)
	{
		case ' ':
			result = 1;
			break;

		case '\t':
			result = 1;
			break;

		case '\n':
			result = 1;
			break;

		case ',':
			result = 1;
			break;

		case ';':
			result = 1;
			break;

		case '.':
			result = 1;
			break;

		case '!':
			result = 1;
			break;

		case '"':
			result = 1;
			break;

		case '(':
			result = 1;
			break;

		case ')':
			result = 1;
			break;

		case '{':
			result = 1;
			break;

		case '}':
			result = 1;
			break;

		default:
			result = 0; /* no seperator */
	}
	return (result);
}
