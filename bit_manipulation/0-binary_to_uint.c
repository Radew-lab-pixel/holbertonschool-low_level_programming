#include "main.h"

int _strlen(const char *s);
int binaryToInt(int binaryInInt, int position);
int _atoi(const char *s);
int stringCheck(const char *s);
unsigned int binaryToDec(const char *s);

/**
 * binary_to_unit -function to convert binary to decimal
 *
 * @b: string containing binary input
 * Return: unsigned int result of converted value
 */

unsigned int binary_to_uint(const char *b)
{
	const char *temp = b;
	/*unsigned int binaryInt;  int value holding binary format */
	/*int length; */
	int result = 0;
	
	if (stringCheck(temp)) /* doing string check prior */
	{	/* result = 88;*/
		result = binaryToDec(temp);
	}
	else
		return (0);


	/*binaryInt = _atoi(temp);  convert s to int */
	/* call the binaryToInt ( pass converted binary in int format */
	/* and LSB position of the binaryInt which start position */
	
	/*result = binaryToInt(binaryInt, 0);*/
	
	/*length = _strlen(temp);*/

	return (result);
	
}

/**
 * stringCheck - function to check if string input contain only binary
 *
 * @s : string input
 * Return: 1 if true else 0 is false
 */

int stringCheck(const char *s)
{
	const char *temp = s;
	
	if (temp == NULL)
	{
		return (0); /* don't bother to progress */
	}
	while (*temp != '\0')
	{	/* if binary number */
		if ((*temp == '1') || (*temp == '0'))
			temp++;
		else
			return (0);
	}
	return (1);
}

/**
 * binaryToDec - function to convert binary to Decimal
 *
 * @s : input string
 * Return: value in decimal 
 */
unsigned int binaryToDec(const char *s)
{
	int length;
	int count = 0;
	const char *temp = s;
	unsigned int result = 0;
	int currentBitVal; /* current bit value in int */
	
	length = _strlen(temp); /* length of s */

	while ((temp[count] != '\0') && (count < length))
	{
		currentBitVal = temp[count] - '0';
		/* calculate the MSB at the start and do 2^(length - count) */
		result = result + (currentBitVal * (1 << (length - count)));
		count++;
	}
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
 *
 * @binaryInInt: binary result stored as Integer eg. int binaryInInt = 1101
 * @position: position of the binary bit (e.g 0 is LSB, 2 will be 3rd bit )
 * Return: integer result of binary conversion
 */
int binaryToInt(int binaryInInt, int position)
{
	int lastDigit;
	int remainBinary;
	int decimalValue = 0;

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
 *
 * @s : input
 * Return: integer value of s
 */
int _atoi(const char *s)
{
	int result = 0;
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
