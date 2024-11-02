#include "main.h"

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

	/* length = _strlen(a + '0');  obtain of length of a */
	/* int temp[n]; */
	/* temporary storage of a between [0..length] NOT allowed */

	midway = n / 2; /* count for for loop to end midway of n */
	/* between 0 and n /2 - midway */
	for (count = 0; count < midway; count++)
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
