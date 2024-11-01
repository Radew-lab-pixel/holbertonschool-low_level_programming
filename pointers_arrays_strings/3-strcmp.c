#include "main.h"

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
	int length_s1, length_s2, length, count, flag;

	length_s1 = _strlen(s1); /* obtain of length of src */
	length_s2 = _strlen(s2); /* obtain length of dest */
	
	flag = 1; /* flag to detect if match */

	if (length_s1 >= length_s2) 
	{
		length = length_s2; /* assign length_s2 to length */
	}
	else 
	{
		length = length_s1; /* assign length_s1 to length */
	}


	for (count = 0; count < length; count++)
	{
		if (s1[count] == s2[count])
		{
			flag = 0;
		}	
		else 
		{
			
		}
	}
	return (dest);
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
