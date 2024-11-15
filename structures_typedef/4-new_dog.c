#include "dog.h"
#include <stdlib.h>

int _strlen(char* source);
char *_strcpy(char* dest, char* src);

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
	int length_name, length_owner;

	dest = (dog_t *) malloc(sizeof(dog_t));
	if (dest == NULL)
	{	
		/*free(dest->name);*/
		/*free(dest->owner);*/
		free(dest);
		return (NULL);
		/*exit(0);*/
	}
	length_name = _strlen(name);
	/*dest->name = (char *) malloc(sizeof(name));*/
	dest->name = (char *) malloc((length_name + 1) * sizeof(char));
	if (dest->name  == NULL)
        {
                free(dest->name);
                /*free((*dest).age[0]);*/
                free(dest);
                return (NULL);
                /*exit(0);*/
        }

	length_owner = _strlen(owner);
	/*dest->owner = (char *) malloc(sizeof(owner));*/
	dest->owner = (char *) malloc((length_owner + 1) * sizeof(char));
	/* if no length_owner + 1 ,  Invalid read of size 1 */
	/*==1409==    at 0x484ED24: strlen*/
	/*(in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)*/

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
	/* checker want this ??? */
	dest->name = _strcpy(dest->name, name);
	dest->age = age;
	/*Checker don't this want :(*/
	/*(*dest).owner = owner;*/
	/*Checker want this */
	(*dest).owner = _strcpy(dest->owner, owner);

	return (dest);
}

/**
 * _strlen - duplicate of strlen
 *
 * Description : find the length of the char *
 * @source : char * array
 * Return: integer value of length of source
 */

int _strlen(char* source)
{
	char *temp;  
	int count = 0;
	temp  = source;

	for (count = 0; temp[count] != '\0'; count++)
	{
	}
	return (count);
}


/**
 * _strcpy - duplicate of strcpy 
 *
 * Description : copy the content of one string to another
 * @destination : string variable to be copied to
 * @source : string variable to be copied from 
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int count, length;

	length = _strlen(src);

	/** char *start = dest; **/

	count = 0;

	while (count < length)
	{
		*(dest + count) = *(src + count);
		count++;
	}

	*(dest + count) = '\0';
	return (dest);
}

