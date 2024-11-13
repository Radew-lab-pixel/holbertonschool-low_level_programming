#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - create structure for dog
 *
 * @name: char array
 * @age: float
 * @owner: char array
 * Description : create stuct dog with three elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
