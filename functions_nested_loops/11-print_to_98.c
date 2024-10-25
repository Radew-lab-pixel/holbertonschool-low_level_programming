#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number from 98 or to 98
 * @n : integer operand input n
 * Return: none
 * Example:
 *
**/

void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
		printf("%d, ", i);
		}
		printf("98");
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
		printf("%d, ", i);
		}
		printf("98");
	}
	else
	{
		printf("error");
	}
	printf("\n");
}
