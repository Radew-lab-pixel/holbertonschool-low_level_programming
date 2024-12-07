#include "main.h"
#include <stdlib.h>

int intCheck(unsigned long int n);
int getBitAtPosition(unsigned int num, unsigned int index);
int setBitAtPosition(unsigned long int num, unsigned int index);

/**
 * set_bit - function to set bit to 1 at given index
 *
 * @n : input number
 * @index : the position of binary value to be set to 1
 * Return: 1 if successful else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ntemp = *n;

	if (index > 32)
	{
		return (-1);
	}
	*n = setBitAtPosition(ntemp, index);
	return (1);

}

/**
 * setBitAtPosition - sub function to perform OR function at given index
 *
 * @num : input number
 * @index : the position of binary value to be set to 1
 * Return: num pointer
 */

int setBitAtPosition(unsigned long int num, unsigned int index)
{
	unsigned long int ntemp = num;
	unsigned long int bitPos;

	bitPos = 1 << index;
	ntemp = bitPos | ntemp; /*OR gate */
	return (ntemp);
}

/**
 * get_bit - function to return the bit value of certain index
 *
 * @n : integer input
 * @index : position of the bits
 * Return: binary digit if successful else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ntemp = n;
	int binaryDigit; /* binary value of the binaryArray[index] */

	if ((ntemp == 0) || (index > 32))
		return (-1);
	if (intCheck(ntemp))
	{
		binaryDigit =  getBitAtPosition(n, index);
		return (binaryDigit);
	}
	/*return (binaryDigit); */
	return (-1);
}

/**
 * getBitAtPosition - function to extract binary bit at cetain position
 *
 * @num : input
 * @index : position of the inteded bit
 * Return: bit
 */

int getBitAtPosition(unsigned int num, unsigned int index)
{
	int curLSB;
	unsigned long int ntemp = num;

	ntemp = ntemp >> index;  /* starting from MSB*/
	curLSB = ntemp & 1;
	return (curLSB);
}


/**
 * intCheck - function to check if input integer is valid
 *
 * @n: input integer
 * Return: 1 if valid else 0
 */
int intCheck(unsigned long int n)
{
	if (!n)
	{
		return (0);
	}
	else if (n <= 0)
	{
		/*_putchar('0'); */
		return (1);
	}
	else
		return (1);
}
