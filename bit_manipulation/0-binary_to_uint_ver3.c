#include "main.h"

int _strlen(const char *s);
unsigned  binaryToInt(unsigned int binaryInInt, int position);
unsigned int _atoi(const char *s);

/**
 * binary_to_unit -function to convert binary to decimal
 *
 * @b: string containing binary input
 * Return: unsigned int result of converted value
 */

unsigned int binary_to_uint(const char *b)
{
	const char *temp = b;
	unsigned int binaryInt; /* int value holding binary format */
	/*int length; */
	unsigned int result;

	binaryInt = _atoi(temp); /* convert s to int */
	printf("binaryInt : %u", binaryInt); /* for debugging */
	/* call the binaryToInt ( pass converted binary in int format */
	/* and LSB position of the binaryInt which start position */
	result = binaryToInt(binaryInt, 0);
	
	/*length = _strlen(temp);*/

	return (result);
	
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
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * binaryToInt - function to convert binary numerical  to pure Integer
 * change int binaryInInt to unsigned due to checker
 *
 * @binaryInInt: binary result stored as Integer eg. int binaryInInt = 1101
 * @position: position of the binary bit (e.g 0 is LSB, 2 will be 3rd bit )
 * Return: integer result of binary conversion
 */
unsigned int binaryToInt(unsigned int binaryInInt, int position)
{
	unsigned int lastDigit; /* int to unsigned int due to checker */
	unsigned int remainBinary;
	unsigned int decimalValue = 0;

	if (binaryInInt == 0) /* no more last digit after recursive << */
	{
		/*return (s[i] - '0');  return MSB bit in integer format */
		return 0; /* n om ore digit */

	}
	/*result = start;*/
	lastDigit = binaryInInt % 10; /* extract current LSB which the remainder*/
	remainBinary = binaryInInt / 10; /* remove current LSB */
	
	decimalValue = lastDigit * (1 << position); /* convert the current LSB to decimal*/
		
	return (decimalValue + binaryToInt(remainBinary, position + 1));

}

/**
 * _atoi - custom function converting string to integer
 * change int to unsigned int due to checker
 * @s : input
 * Return: unsigned integer value of s
 */
unsigned int _atoi(const char *s)
{
	unsigned int result = 0;
	int count = 0;

	if (s[0] == '-')
	{
		return (0); /* error as negative value detected */
	}
	while (s[count] != '\0')
	{	if ((s[count] == '0') || (s[count] == '1'))
		{ /* go from right to left of s */
			result = result * 10 + (s[count] - '0');
			count++;
		}
		else /* other characters beside 0 and 1 */
			return (0); /* exit and return 0 */
	}
	return (result);

}
