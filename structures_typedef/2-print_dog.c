#include "dog.h"

/**
 * print_dog - to print stuct elements
 * struct dog - struct of datatype
 *
 * Description: function to create struct nameddog
 *
 * @d: object
 * Return: void
 */

void print_dog(struct dog *d)
{
	struct dog *dest;

	dest = d; /*copy d to dest */

	printf("Name: %s\nAge: %.6f\n", dest->name, dest->age);
	printf("Owner: %s\n", (*dest).owner);
	return;

}
