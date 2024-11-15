#include "dog.h"
#include <stdlib.h>

char* _strcpy(char* destination, char* source);

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
	int count = 0;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dest = (dog_t *) malloc(sizeof(dog_t));
	if (dest == NULL)
	{	
		/*free(dest->name);*/
		/*free(dest->owner);*/
		free(dest);
		return (NULL);
		/*exit(0);*/
	}
	dest->name = (char *) malloc(sizeof(name));
	if (dest->name  == NULL)
        {
                free(dest->name);
                /*free((*dest).age[0]);*/
                free(dest);
                return (NULL);
                /*exit(0);*/
        }

	dest->owner = (char *) malloc(sizeof(owner));
        /* age is float thus can't be NULL */
        if (dest->owner == NULL)
        {
                free(dest->name);
                /*free((*dest).age[0]);*/
                free(dest->owner);
                free(dest);
                return (NULL);
                /*exit(0);*/
        }

	/* age being a float variable , no malloc */
	/*dest->age = malloc(sizeof(age));*/
	/*dest->name = name; */
	/* checker don't want this ??? */
	/*dest->name = _strcpy(dest->name, name);*/

	for (count = 0; name[count] != '\0'; count++)
        {
                dest->name[count]  = name[count];
        }
	dest->name[count] = '\0';

	dest->age = age;
	/*Checker don't this want :(*/
	/*(*dest).owner = owner;*/
	/*Checker don't want this */
	/*dest->owner = _strcpy(dest->owner, owner);*/
	count = 0;
	for (count = 0; owner[count] != '\0'; count++)
        {
                dest->owner[count]  = owner[count];
        }
	return (dest);
}


/**
 * _strcpy - duplicate of strcpy 
 *
 * Description : copy the content of one string to another
 * @destination : string variable to be copied to
 * @source : string variable to be copied from 
 * Return: destination
 */

char* _strcpy(char* destination, char* source)
{
	char *temp;
	int count = 0;
	
	temp = source;

	for (count = 0; temp[count] != '\0'; count++)
	{
		destination[count]  = source[count];
	}
	return (destination);
}
