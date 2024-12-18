#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create array with values
 * Description : Fill with values between min and max
 *
 * @min : integer min value
 * @max : integer max value
 * Return: Integer array
 */

int *array_range(int min, int max)
{
	int length;
	int *dest;
	int count = 0;

	if (min > max)
	{
		return (NULL);
	}

	if (min == max)
	{
		length = 1;
	}
	else
	{
		length = max - min; /* length or size of array */
	}
	dest = (int *) malloc((1 + length) * sizeof(int)); /* add additonal for "\0'*/
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}

	for (count = 0; count < length; count++)
	{
		dest[count] = count + min;
		if (dest == NULL)
		{
			free(dest);
			return (NULL);
		}
	}
	dest[count] = '\0';
	return (dest);
}
