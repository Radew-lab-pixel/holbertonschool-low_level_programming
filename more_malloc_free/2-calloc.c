#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _strlen(char *s);


/**
 * _calloc - function that allocates memory for an array,
 *
 * Description: create memory and initalize all blocks to 0
 *
 * @nmemb : unsigned int nmeb of number of memory block
 * @size : size of each memory block
 *
 * Return: array dest (Successful) else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;
	int count = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	dest = malloc(nmemb * size); /* total heap size */

	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}

	for (count = 0; count < (int) nmemb; count++)
	{
		dest[count] = 0; /* intialize dest all to 0 */

		/*if (dest == NULL) */
		/*{*/
			/* to please valgrind */
			/*free(dest[count]);*/
		/*	free(dest); */
		/*	return (NULL);*/
		/*}*/
	}
	return (dest);

}


/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
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
