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
#include "main.h"

/**
 * _puts - display string by input
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts("Hello World")
 */

void _puts(char *str)
{
        int length, count;

        length = _strlen(str);

        for (count = 0; count < length; count++)
        {
                _putchar(str[count]);
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
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

#Task 4
'''
Write a function that prints a string, in reverse, followed by a new line.

    Prototype: void print_rev(char *s);
'''
#Answer 
''' 
#include "main.h"

/**
 * print_rev  - display and reverse  string by input
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : _print_rev("Hello World")
 */

void print_rev(char *s)
{
        int length, count;

        length = _strlen(s); /* length of s */

        for (count = length - 1; count >= 0; count--) /* count to start before '\0' thus length - 1 */
        {
                _putchar(s[count]);
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
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

#Task 5 
'''
Write a function that reverses a string.

    Prototype: void rev_string(char *s);
'''
#Answer 
'''
#include "main.h"

void print_rev_string(char *s);
void swap_char (char *a, char *b);

/**
 * rev_string  - display and reverse  string by input
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : rev_string("Hello World")
 */

void rev_string(char *s)
{
        print_rev_string(s);
}

/**
 * print_rev_string  -  display and reverse  string by input
 * modified from Task 4 - print_rev
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : _print_rev("Hello World")
 */

void print_rev_string(char *s)
{
        int length, count, back_count;

        length = _strlen(s) - 1; /* length of s , -1 to exclude '\0', if not will not update the changes of s */

        back_count = length;
        for (count = 0; count <= (length / 2); count++) /* count to start before '\0' thus length - 1 , if using count < (length/2) will cause issue with word count in assessment*/
        {
                /** _putchar(s[count]); **/
                swap_char (s + count, s + back_count);
                back_count--;
        }
        *(s + length + 1) = '\0'; /* add '\0' to end of s */ 
        /** _putchar('\n'); **/
}
/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s : char pointer s
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

/**
 * swap_char - swap the pointer values
 * modified from Task 1 - swap_int
 * @a : char pointer a
 * @b : char pointer b
 * Return: none
 *
 * Example : swap_char('A', 'z')
 */

void swap_char (char *a, char *b)
{
        char c = *a;

        *a = *b;
        *b = c;
}
'''

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

    Prototype: void puts2(char *str);
'''
#Task 6 
'''
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

    Prototype: void puts2(char *str);
'''
#Answer 
'''

