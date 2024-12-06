#include "main.h"

int intCheck(unsigned long int n);
void dec2Binary(unsigned long int n);

/**
 * print_binary - function to print converted decimal to binary
 *
 * @n : integer input
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int ntemp = n;

	/* char *binary; */
	/*int count = 0; */
	/*_putchar('0'); */
	/*_putchar('\n'); */
	if (ntemp == 0)
		_putchar('0');
	if (intCheck(ntemp))
	{
		dec2Binary(ntemp);
	}
	return (void);
}

/**
 * dec2Binary - sub function to convert decimal to binary and print it
 *
 * @n : input
 * Return: void
 */

void dec2Binary(unsigned long int n)
{
	unsigned int curLSB;
	unsigned long int ntemp = n;

	if (ntemp == 0)
	{
		return;
	}
	curLSB = ntemp & 1; /* obtain current LSB */
	/* printf("curLSB %u\n",curLSB); */
	ntemp = ntemp >> 1;  /*move right by 1 bit to divide by 2 */
	dec2Binary(ntemp); /*recursive */
	_putchar(curLSB + '0'); /*_putchar after recursive to print backward*/
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
		_putchar('0');
		return (1);
	}
	else
		return (1);
}
