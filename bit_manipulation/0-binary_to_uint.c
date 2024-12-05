#include "main.h"

int _strlen(char *s);
int binaryToInt(char *s, int length, int count);

/**
 * binary_to_unit -function to convert binary to decimal
 *
 * @b: string containing binary input
 * Return: unsigned int result of converted value
 */

unsigned int binary_to_uint(const char *b)
{
	const char *temp = b;
	int length; 

	length = _strlen(temp);
	
}

/**
 * _strlen - function return length of str
 *
 * @s: string input
 * Return: int result of length
 */
int _strlen(char *s)
{
	int count = 0; 

	if (s == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * binaryToInt - function to convert binary to Integer
 *
 * @s: binary string input
 * @length: int of length of str
 * Return: integer result of binary conversion
 */
int binaryToInt(char *s, int length, int count)
{
	if (count == length)
	{

	}
}
