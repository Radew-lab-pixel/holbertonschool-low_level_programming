#include "main.h"

int _strlen(const char *s);
int binaryToInt(int binaryInInt, int start);
int _atoi(const char *s);

/**
 * binary_to_unit -function to convert binary to decimal
 *
 * @b: string containing binary input
 * Return: unsigned int result of converted value
 */

unsigned int binary_to_uint(const char *b)
{
	const char *temp = b;
	/*int length; */ 

	/*length = _strlen(temp);*/
	
}

/**
 * _strlen - function return length of str
 *
 * @s: string input
 * Return: int result of length
 */
int _strlen(const char *s)
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
 * binaryToInt - function to convert binary numerical  to pure Integer
 *
 * @binaryInInt: binary result stored as Integer eg. int binaryInInt = 1101
 * @start: start_position
 * Return: integer result of binary conversion
 */
int binaryToInt(int binaryInInt, int start)
{
	int result = 0;
	if (count == length)
	{
		return (s[i] - '0'); /* return MSB bit in integer format */
	}
	result = s;
	binaryToInt(

}

/**
 * _atoi - custom function converting string to integer
 *
 * @s : input
 * Return: integer value of s
 */
int _atoi(const char *s)
{
	int result = 0;
	int count = 0;

	if (str[0] == -)
	{
		return (0); /* error as negative value detected */
	}
	while (s[count] != '\0')
	{	/* go from right to left of s */
		result = result * 10 + (s[count] - '0');
		count++;
	}
	return (result);

}
