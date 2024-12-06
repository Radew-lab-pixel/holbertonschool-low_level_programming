#include "main.h"

int intCheck(unsigned long int n);
char *dec2BinaryArray(unsigned long int n, char *s);

/**
 * get_bit - function to return the bit value of certain index
 *
 * @n : integer input
 * @index : position of the bits
 * Return : bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ntemp = n;
	char binaryArray[33]; /* 32 bits of unsigned int plus '\0' */
	char *s = binaryArray;

	if (ntemp == 0)
		return (-1);
	if (intCheck(ntemp))
	{	
		printf("index : %u\n", index);
		/*printf("character : %s\n", binaryArray);*/
		s = dec2BinaryArray(ntemp, binaryArray);
	}

	return (1);
}

/**
 * dec2BinaryArray - sub function to convert decimal to binary
 * also store each converted bit into an char array
 * @n : input
 * Return: char array of bits value
 */

char *dec2BinaryArray(unsigned long int n, char *s)
{
	unsigned int curLSB;
	unsigned long int ntemp = n;
	/*char s[33];  32 is size of unisgned long int plus '\0' */
	int count = 0;

	if (ntemp == 0)
	{
		return NULL;
	}
	curLSB = ntemp & 1; /* obtain current LSB */
	/* printf("curLSB %u\n",curLSB); */
	ntemp = ntemp >> 1;  /*move right by 1 bit to divide by 2 */
	count++;
	dec2BinaryArray(ntemp, s); /*recursive */
	/*_putchar(curLSB + '0');  _putchar after recursive to print backward*/
	s[count + 1] = '\0'; /* end of string */
	s[count] = curLSB + '0';
	/* *(s + count) = curLSB + '0';  backward as in recursive */
	/*s--;*/
	return (s);
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
