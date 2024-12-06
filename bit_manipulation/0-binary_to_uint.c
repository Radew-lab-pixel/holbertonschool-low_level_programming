#include "main.h"

int _strlen(const char *s);
int binaryToInt(int binaryInInt, int position);
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
	int binaryInt; /* int value holding binary format */
	/*int length; */
	int result;

	binaryInt = _atoi(temp); /* convert s to int */
	/* call the binaryToInt ( pass converted binary in int format */
	/* and LSB position of the binaryInt which start position */
	result = binaryToInt(binaryInt, 0);
	
	
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
 * @position: position of the binary bit (e.g 0 is LSB, 2 will be 3rd bit )
 * Return: integer result of binary conversion
 */
int binaryToInt(int binaryInInt, int position)
{
	int lastDigit;
	int remainingBinary;
	int decimalValue = 0;

	if (binaryInInt == 0) /* no more last digit after recursive << */
	{
		/*return (s[i] - '0');  return MSB bit in integer format */
		return 0; /* n om ore digit */

	}
	/*result = start;*/
	lastDigit = binaryInInt % 10; /* extract current LSB which the remainder*/
	remainingBinary = binaryInInt / 10; /* remove current LSB */
	
	decimalValue = lastDigit * (1 << position); /* convert the current LSB to decimal*/
		
	return (decimalValue + binaryToInt(remaingBinary, position + 1));

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
