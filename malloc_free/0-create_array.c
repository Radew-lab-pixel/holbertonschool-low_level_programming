#include "main.h"

char *create_array(unsigned int size, char c);

/**
 * create_array : create an array and initialize it with specific content
 * Description : create an array and intialise the content with c
 * @size : size of the array
 * @c : char c that is content
 * Return : char array or NULL if invalide
 */

char *create_array(unsigned int size, char c) 
{
	unsigned int i = 0;

	char *a = (char*) malloc(size * sizeof(char));

	if (size <=0)
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
