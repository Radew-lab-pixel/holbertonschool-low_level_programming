#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * struct dog - create structure for dog
 * * @d: struct of type dog
 * @name: char array name
 * @age : float age
 * @owner: char array owner
 *
 * Description: function to intialize a variable of type
 *
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
