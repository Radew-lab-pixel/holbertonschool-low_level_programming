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

#Task 1 Write a function that concatenates two strings.

    Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
    The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
    If the function fails, it should return NULL
    If n is greater or equal to the length of s2 then use the entire string s2
    if NULL is passed, treat it as an empty string
: string_nconcat 
1-string_nconcat.c
'''

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 *
 * Description: concatenates two strings s1, s2
 * if s2 < n , use length of s2
 *
 * @s1 : char array s1 - final result
 * @s2 : char array s2
 * @n : unsigned integer n which limit the length of s2
 * Return: array s1 (Successful) else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *temp1 = s1;
        char *temp2 = s2;
        char *dest;
        unsigned int size1, size2;
        unsigned int count = 0;

        if (s1 == NULL)
        {
                temp1 = "";
        }
        else
        {
                temp1 = s1;
        }
        if (s2 == NULL)
        {
                temp2 = "";
        }
        else
        {
                /*printf("s2 : %s",s2);*/
                temp2 = s2;
        }
        /*size1 = sizeof(temp1) / sizeof(temp1[0]); */
        /*size2 = sizeof(temp2) / sizeof(temp2[0]); */
        size1 = _strlen(temp1);
        size2 = _strlen(temp2);

        if (n < size2)
        {
                size2 = n;
        }
        dest = (char *) malloc(size1 + size2 + 1);
        if (dest == NULL)
        {
                free(dest);
                return (NULL);
        }
        else
        {
                /*printf("size of dest  %lu", sizeof(dest));*/
                /* copy s1 to dest */
                for (count = 0; count < size1; count++)
                {
                        /* printf("dest [%d] : %s", count, dest[count]); */
                        dest[count] = temp1[count];
                }
                for (count = 0; count < size2; count++)
                {
                        /*printf ("append dest [%d] : %s", size1 + count, temp2[count]);*/
                        dest[size1 + count] = temp2[count];
                }
                dest[size1 + count] = '\0'; /* add end of line */
                if (dest == NULL)
                {
                        free(dest);
                        return (NULL);
                }
                else
                {
                        return (dest);
                }
        }
}


/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 2 : _callocWrite a function that allocates memory for an array, using malloc.

    Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
    The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
    The memory is set to zero
    If nmemb or size is 0, then _calloc returns NULL
    If malloc fails, then _calloc returns NULL

FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

2-calloc.c
'''#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _strlen(char *s);


/**
 * _calloc - function that allocates memory for an array,
 *
 * Description: create memory and initalize all blocks to 0
 *
 * @nmemb : unsigned int nmeb of number of memory block
 * @size : size of each memory block
 *
 * Return: array dest (Successful) else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *dest;
        int count = 0;

        if ((nmemb == 0) || (size == 0))
        {
                return (NULL);
        }

        dest = malloc(nmemb * size); /* total heap size */

        if (dest == NULL)
        {
                free(dest);
                return (NULL);
        }

        for (count = 0; count < (int) (nmemb * size); count++)
        {
                dest[count] = 0; /* intialize dest all to 0 */

                /*if (dest == NULL) */
                /*{*/
                        /* to please valgrind */
                        /*free(dest[count]);*/
                /*      free(dest); */
                /*      return (NULL);*/
                /*}*/
        }
        return (dest);

}


/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''
#Task 3 : array_range 
Write a function that creates an array of integers.

    Prototype: int *array_range(int min, int max);
    The array created should contain all the values from min (included) to max (included), ordered from min to max
    Return: the pointer to the newly created array
    If min > max, return NULL
    If malloc fails, return NULL

 3-array_range.c
 '''
 #include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create array with values
 * Description : Fill with values between min and max
 *
 * @min : integer min value
 * @max : integer max value
 * Return: Integer array
 */

int *array_range(int min, int max)
{
        int length;
        int *dest;
        int count = 0;

        if (min > max)
        {
                return (NULL);
        }

        if (min == max)
        {
                length = 1;
        }
        else
        {
                length = max - min; /* length or size of array */
        }
        dest = (int *) malloc((1 + length) * sizeof(int)); /* add additonal for "\0'*/
        if (dest == NULL)
        {
                free(dest);
                return (NULL);
        }

        for (count = 0; count < length; count++)
        {
                dest[count] = count + min;
                if (dest == NULL)
                {
                        free(dest);
                        return (NULL);
                }
        }
        dest[count] = '\0';
        return (dest);
}
'''


