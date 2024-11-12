##Week 6 : C - More malloc, free
#Task 0 : Trust no one
mandatory

Write a function that allocates memory using malloc.

    Prototype: void *malloc_checked(unsigned int b);
    Returns a pointer to the allocated memory
    if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

0-malloc_checked.c
'''
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 *
 * Description: allocate memory using malloc
 *
 * @b : unsigned integer b of the memory size
 *
 * Return: pointer dest (Successful) or exit(98) (Fail)
 */

void *malloc_checked(unsigned int b)
{
        /* unsigned int *dest = (unsigned int *) malloc(sizeof(b)); */
        /*char *dest = (char *) malloc(sizeof(b)); */
        int *dest = malloc(b);

        if (dest == NULL)
        {
                free(dest);
                exit(98); /* exit normally */
        }
        return (dest);

}
