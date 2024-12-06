#include "main.h"

int intCheck (unsigned long int n);

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
	char binary[64];
	int count = 0;
	
	if (intCheck (ntemp))
	{	while (ntemp > 0)
		{
			binary[count] = (ntemp & 1) + '0'; /* trucated the current LSB*/
			ntemp = ntemp >> 1; /* right shift thus divided /2 until ntemp is 0*/
			count++;
		}
	
		binary[count] = '\0';
		count--; /* to ignore '\0'); */ 
	
		while (count + 1 > 0)
		{	/* print backward from LSB to MSB */
			_putchar(binary[count]);
			count--;		
		}
	}
	return;
}

/**
 * intCheck - function to check if input integer is valid
 *
 * @n: input integer
 * Return: 1 if valid else 0
 */
int intCheck (unsigned long int n)
{
	if (!n)
	{
		return (0);
	}
	else if (n == 0)
	{ 
		_putchar('0');
		return (1);
	}
	else
		return (1);
}
