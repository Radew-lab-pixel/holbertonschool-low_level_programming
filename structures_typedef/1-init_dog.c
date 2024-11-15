#include "dog.h"

/**
 * init_dog - to print struct attributes
 * struct dog - structure of the dog
 *
 * Description: function to create struct nameddog
 *
 * @d: object
 * @name: char array
 * @age: float
 * @owner:char array
 * Return: void
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog doggy; /* create struct dog variable */

	if (d == NULL)
	{
		/*return (NULL);*/
		return;
	}

	doggy.name = name;
	doggy.age = age;
	doggy.owner = owner;

	*d = doggy;
	return;
	/*return (0); */
}
