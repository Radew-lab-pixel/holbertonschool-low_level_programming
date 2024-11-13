#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @struct dog *d: struct data type
 * @d: struct : first variable
 * @name: char array name
 * @age : float age
 * @owner: char array owner
 *
 * Description : function to intialize a variable of type struct dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog adoggy; /* create struct dog variable */

	doggy.name = name;
	doggy.age = age;
	doggy.owner = owner;

	*d = doggy;
	return (void);
}
