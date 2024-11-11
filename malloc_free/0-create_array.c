#include "main.h"

char *create_array(unsigned int size, char c);

/**
 * create_array - main entry
 *
 * Description: create an array and intialise the content with c
 *
 * @size : size of the array
 * @c : char c that is content
 * Return: NULL (invalid) or a  array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *a = (char *) malloc(size * sizeof(char));

	if (size <= 0)
	{
		return (NULL);
	}

	if (a == NULL)
	{
		return (NULL);
	}

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			a[i] = c;
			i++;
		}

	return (a);
	}
}
