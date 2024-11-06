#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculate the forward and backward
 *
 * Description : value of the diagonal sum of the square matrix
 * @a  : char 2D array with square columns
 * @size : int size of row and column of array a
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	/* counter */
	int count = 0;

	/* when 2D array passed as pointer *a */
	/* pointer a stored the passed 2D array as 1D array */
	/* value of diagnonal summation */
	int sum_forward = 0;
	int sum_backward = 0;

	while (count < (size * size))
	{
		/* sum of forward diagnoal */
		sum_forward = sum_forward + a[count];

		/* increment of the count */
		count = count + size + 1;
	}

	/* backward diagonal summation */
	count = size - 1; /* first backward search position of *a */

	while (count < size * size - 1)
	{
		sum_backward = sum_backward + a[count];
		count = count + size - 1;
	}

	printf("%d, %d\n", sum_forward, sum_backward);

}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
