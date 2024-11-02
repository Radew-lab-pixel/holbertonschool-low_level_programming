#include "main.h"

int _intlen(int *s);

/**
 * reverse_array - reverse array according to interger n
 * @a  : string pointer to array a
 * @n : integer n size of the array to be swapped
 *
 * Return: void ( successful )
 *
 */

void reverse_array(int *a, int n)
{
	int temp, count, midway;

	/*length = _intlen(a); */
	/* obtain of array length of a */
	/* int temp[n]; */
	/* temporary storage of a between [0..length] NOT allowed */

	midway = n / 2; /* count for for loop to end midway of n */
	/* between 0 and n /2 - midway */

	for (count = 0; count <= midway; count++)
	{
		/* perform swap */
		temp = a[count];
		a[count] = a[n - count];
		a[n - count] = temp;
		/* a[count] = temp[n - count]; */
		/* copy for end of temp to start of a  NOT allowed*/
	}

}

/**
 * _intlen - check the length of integer array
 *
 * Modified from _strlen
 * @s  : int array  pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _intlen(aa)
 */

int _intlen(int *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
