##C - Pointers, arrays and strings

#Task 0 
'''
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

    Prototype: void reset_to_98(int *n);
'''
#Answer
'''
#include "main.h"

/**
 * reset_to_98 -   updates the pointer value it points to to 98
 * @n  : integer pointer n
 *
 * Return: none
 *
 * Example : reset_to_98(20)
 */

void reset_to_98(int *n)
{
        *n = 98;
}
'''

#Task 1 
'''
Write a function that swaps the values of two integers.

    Prototype: void swap_int(int *a, int *b);
'''

#Answer 
'''
#include "main.h"

/**
 * swap_int - swap the pointer values
 * @a : integer pointer a
 * @b : integer pointer b
 * Return: none
 *
 * Example : swap_none(20, 10)
 */

void swap_int(int *a, int *b)

{
        int c = *a;

        *a = *b;
        *b = c;
}
'''
#Task 2 : 
'''
Write a function that returns the length of a string.

    Prototype: int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
'''

#Answer 
'''
#include "main.h"

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
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

#Task 3  
'''
Write a function that prints a string, followed by a new line, to stdout.

    Prototype: void _puts(char *str);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.
'''
#Answer 
'''

