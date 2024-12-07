#include "main.h"
#include <stdlib.h>

int intCheck(unsigned long int n);
int clearBitAtPosition(unsigned long int num, unsigned int index);

/**
 * clear_bit - function to clear bit to 0 at given index
 *
 * @n : input number
 * @index : the position of binary value to be set to 0
 * Return: 1 if successful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ntemp = *n;

	if (index > 32)
	{
		return (-1);
	}
	*n = clearBitAtPosition(ntemp, index);
	return (1);

}

/**
 * clearBitAtPosition - sub function to perform OR function at given index
 *
 * @num : input number
 * @index : the position of binary value to be set to 1
 * Return: num pointer
 */

int clearBitAtPosition(unsigned long int num, unsigned int index)
{
	unsigned long int ntemp = num;
	unsigned long int bitPos;

	bitPos = 1 << index; /* go to index */
	bitPos = ~bitPos; /* NOT gate */
	ntemp = bitPos & ntemp; /*AND gate */
	return (ntemp);
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
