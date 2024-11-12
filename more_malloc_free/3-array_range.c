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

	length = max - min; /* length or size of array */

	dest = malloc((1 + length) * sizeof(int)); /* add additoonal for "\0'*/

	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}

	/*	if (length == 0) */
	/*	*dest = min; don't know why but please checker*/

		for (count = 0; count < length + 1; count++)
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
