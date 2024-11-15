#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free the dog attributes
 *
 * Description : function to free the dog attributes
 * dog_t - struct of the attributes
 * @d : dog attribute
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(0);
	}

	free(d->name);
	free(d->owner);
	free(d);
	return;

}
