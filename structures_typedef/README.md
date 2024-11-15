##Week 6 : C - Structures, typedef

#Task 0 : Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

dog.h 
'''
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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
'''

#Task 1 : A dog is the only thing on earth that loves you more than you love yourself
mandatory

Write a function that initialize a variable of type struct dog

    Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

1-init_dog.c 
'''
#include "dog.h"

/**
 * init_dog - to print struct attributes
 *
 * Description: function to create struct nameddog
 *
 * struct dog
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
'''
#Task 2 : A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

    Prototype: void print_dog(struct dog *d);
    Format: see example bellow
    You are allowed to use the standard library
    If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
    If d is NULL print nothing.

2-print_dog.c
'''
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

        if (dest->name == NULL)
        {
                dest->name = "(nil)";
        }
        /* if (dest->age == NULL) float variable can't be null */
        /*{*/
        /*      dest->age = 0;*/
        /*}*/
        if (dest->owner == NULL)
        {
                dest->owner = "(nil)";
        }


        printf("Name: %s\nAge: %.6f\n", dest->name, dest->age);
        printf("Owner: %s\n", (*dest).owner);
        return;

}
'''

Task 3 : Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read 
Define a new type dog_t as a new name for the type struct dog.

dog.have
'''
Refer to task 0
'''

Task 4 : A door is what a dog is perpetually on the wrong side of 
Write a function that creates a new dog.

    Prototype: dog_t *new_dog(char *name, float age, char *owner);
    You have to store a copy of name and owner
    Return NULL if the function fails
4-new_dog.c
'''

#include "dog.h"
#include <stdlib.h>

int _strlen(char *source);
char *_strcpy(char *dest, char *src);

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

int _strlen(char *source)
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
 * @dest : string variable to be copied to
 * @src: string variable to be copied from
 * Return: dest
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
'''
Task 5 : How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg 
Write a function that frees dogs.

    Prototype: void free_dog(dog_t *d);

5-free_dog.c
'''
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
'''
