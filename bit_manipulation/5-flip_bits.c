#include "main.h"
#include <stdlib.h>

int intCheck(unsigned long int n);
unsigned int flip_bits_wrong(unsigned long int n, unsigned long int m);

/**
 * flip_bits - function to return no, of bits
 * to flip to achived destinated no.
 *
 * @n : orignal input number
 * @m : destinated number
 * Return: 1 if successful else -1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int toggleBits;
	unsigned int count = 0;

	toggleBits = n ^ m; /*XOR gate */

	/* use Brian Kernigham algo */
	while (toggleBits > 0)
	{
		toggleBits = toggleBits & (toggleBits - 1);
		count++;
	}
	return (count);
}


/**
 * flip_bits_wrong - wrong function to return no, of bits
 * to flip to achived destinated no.
 *
 * @n : orignal input number
 * @m : destinated number
 * Return: 1 if successful else -1
 */

unsigned int flip_bits_wrong(unsigned long int n, unsigned long int m)
{
	unsigned int toggleBits = 0;
	int bitDiff = 0;

	toggleBits = n ^ m; /* XOR gate */
	bitDiff = toggleBits - n;  /* difference from orignal n */
	if (bitDiff < 0)
	{
		bitDiff = -bitDiff; /* absolute value */
	}
	return (bitDiff);
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
