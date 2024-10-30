#include "main.h"
#include <stdio.h>

/**
 * print_array - display array by input n
 * @a  : string pointer str
 * @n : integer n for number of array
 *
 * Return: none
 *
 * Example : print_array("Hello World", 5)
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;

	while (count < n)
	{
		if (count == (n - 1))
		{
			printf("%d", *(a + count));
		}
		else
		{
			printf("%d, ", *(a + count));
		}
		count++;
	}
	printf("\n");
}
