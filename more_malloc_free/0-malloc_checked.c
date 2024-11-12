#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 *
 * Description: allocate memory using malloc
 *
 * @b : unsigned integer b of the memory size
 *
 * Return: pointer dest (Successful) or exit(98) (Fail)
 */

void *malloc_checked(unsigned int b)
{
	int *dest = malloc(sizeof(b));

	if (dest == NULL)
	{
		free(dest);
		exit(98); /* exit normally */
	}
	return (dest);

}



