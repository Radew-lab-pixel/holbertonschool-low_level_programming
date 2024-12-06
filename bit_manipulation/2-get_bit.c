#include "main.h"
#include <stdlib.h>

int intCheck(unsigned long int n);
void dec2BinaryArray(unsigned long int n, char *s, int *count);

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
	char binaryArray[32] = {0} ; /*32 bits of unsigned int plus '\0' */
	/* char *binaryArray = (char *)malloc(33); 32 bits of long int and plus '\0' */
	int count = 0; /* counter to keep track of char binaryArray */
	int binaryDigit; /* binary value of the binaryArray[index] */

	if (ntemp == 0)
		return (-1);
	if (intCheck(ntemp))
	{	
		printf("index : %u\n", index);
		/*printf("character : %s\n", binaryArray);*/
		dec2BinaryArray(ntemp, binaryArray, &count); /* count address passed */
		binaryArray[count + 1] = '\0';
		printf( "Binary count: %d\n",count);
		printf(" BinaryArray[count] = %c\n", binaryArray[0]);
		binaryDigit = binaryArray[index] - 0; /* - '0' char to int */
		printf("binaryDigit : %d\n", binaryDigit);
		/*binary[(*index)++] = (num & 1) + '0';  */

		return (binaryDigit); 
	}
	/*return (binaryDigit); */
	return (-1);
}

/**
 * dec2BinaryArray - sub function to convert decimal to binary
 * also store each converted bit into an char array
 * @n : input
 * @s : char array to stored converted binary value
 * @count : pointer for counter of the char array s position
 * Return: char array of bits value
 */

void dec2BinaryArray(unsigned long int n, char *s, int *count)
{
	unsigned int curLSB;
	unsigned long int ntemp = n;
	/*char s[33];  32 is size of unisgned long int plus '\0' */
	/*int count = 0; */

	if (ntemp == 0)
	{
		return;
	}
	curLSB = ntemp & 1; /* obtain current LSB */
	/* printf("curLSB %u\n",curLSB); */
	ntemp = ntemp >> 1;  /*move right by 1 bit to divide by 2 */
	/*count++; */
	/**(count) = *(count) + 1;*/
	dec2BinaryArray(ntemp, s, count); /*recursive */
	/*_putchar(curLSB + '0');  _putchar after recursive to print backward*/
	/*s[count + 1] = '\0';  end of string */
	/* s[count] = curLSB + '0'; */
	/*s[*(count)] = curLSB + '0';  + '0' int to char */
	/* *(s + count) = curLSB + '0';  backward as in recursive */
	/*s--; */
	s[*(count)++] = curLSB + '0';
	/*binary[(*index)++] = (num & 1) + '0'; */
	printf("s[*(count)] : %c\n", s[*(count)]);
	/*return (s); */
	return;
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
