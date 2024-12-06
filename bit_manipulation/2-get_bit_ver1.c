#include "main.h"

int intCheck(unsigned long int n);
char *dec2Binary(unsigned long int n, char *s);

/**
 * get_bit - function to get bit value of  converted decimal to binary
 *
 * @n : integer input
 * @index : index of required bit
 * Return: 1 if successful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ntemp = n;
	char *s = malloc(sizeof(unsigned long int) + 1);
	
	/* char *binary; */
	/*int count = 0; */
	/*_putchar('0'); */
	/*_putchar('\n'); */
	if (ntemp == 0)
	{	/*_putchar('0');*/
		s[0] = '0';
		s[1] = '\n';
	}
	if (intCheck(ntemp))
	{
		s = dec2BinaryArray(ntemp, s);
	}
	/*return;*/
	return (1);
}

/**
 * dec2BinaryArray - sub function to convert decimal to binary and update array
 *
 * @n : input
 * @s
 * Return: updated char array
 */

char *dec2Binary(unsigned long int n, char *s)
{
	unsigned int curLSB;
	unsigned long int ntemp = n;
	char *s_temp = s;

	if (ntemp == 0)
	{
		return;
	}
	curLSB = ntemp & 1; /* obtain current LSB */
	/* printf("curLSB %u\n",curLSB); */
	ntemp = ntemp >> 1;  /*move right by 1 bit to divide by 2 */
	s_temp++;
	dec2Binary(ntemp, s_temp); /*recursive */
	*(s_temp) = curLSB + '0';
	s_temp--;
	/*_putchar(curLSB + '0'); _putchar after recursive to print backward*/
	return (s_temp);
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
