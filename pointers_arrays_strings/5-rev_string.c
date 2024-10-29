#include "main.h"
#include <unistd.h>

/**
 * rev_string  - display and reverse  string by input
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : rev_string("Hello World")
 */

void rev_string(char *s)
{
	int length, count;

	/*print_rev(s);*/
	length = _strlen(s); /* length of s */
	char *s_temp;

	for (count = length - 1; count >= 0; count--)
	{
		s_temp[length - count - 1] = s[count];
	}

}

/**
 * _strlen - check the length of string
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
