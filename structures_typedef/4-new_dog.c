#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function create a attribute
 *
 * Description : create a new attribute from struct new_dog
 *
 * @name : char value name of the dog
 * @age : float value age
 * @owner : char value owner
 *
 * Return: dest (successful)  or NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dest;

	dest = (dog_t *) malloc(sizeof(dog_t));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}

	/* age is float thus can't be NULL */
	if ((name  == NULL) || (owner == NULL))
	{	
		/*free(dest->name);*/
		/*free((*dest).age[0]);*/
		/*free(dest->owner);*/
		free(dest);
		return (NULL);
	}

	(*dest).name = name;
	(*dest).age = age;
	dest->owner = owner;

	return (dest);
}
