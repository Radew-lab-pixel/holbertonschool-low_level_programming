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
#include "main.h"

void _puts_2x(char *str);

/**
 * puts2 - display every other character of a string, starting with the first character
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts2("123456789")
 */

void puts2(char *str)
{
        _puts_2x(str);
}

/**
 * _puts_2x - every second vhar in  string by input
 * Function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts_2x("123456789") -> 13579
 */
void _puts_2x(char *str)
{
        int length, count;

        length = _strlen(str);

        for (count = 0; count < length; (count = count + 2))
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
#Task 7 
'''
Write a function that prints half of a string, followed by a new line.

    Prototype: void puts_half(char *str);
    The function should print the second half of the string
    If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
'''

#Answer 
'''
#include "main.h"

void _puts_halve(char *str);
/**
 * puts_half - display second half of string
 * @str : string pointer str
 *
 * Return : none
 *
 * Example : puts_halfway("Hello World")
 */

void puts_half(char *str)
{
        _puts_halve(str);
}
/**
 * _puts_halve - display string by input
 * function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts("Hello World")
 */

void _puts_halve(char *str)
{
        int count, half_whole, count_offset, half_remain;

        int length = _strlen(str);

        half_whole = length / 2; /*whole number of length /2 */
        half_remain = length % 2; /* remain of number of length /2 */

        if (half_remain != 0)
        /* the length is not in multipled of 2 - not perfect half */
        {
                count_offset = 1; /* count 1 address later */
        }
        else
        {
                count_offset = 0; /* keep original address */
        }

        for (count = count_offset; count <= half_whole; count++)
        {
                if ((str[count + half_whole]) != '\0')
                {
                        _putchar(str[count + half_whole]);
                        /*start from second half of str */
                }
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
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

#Task 8 
'''
Write a function that prints n elements of an array of integers, followed by a new line.

    Prototype: void print_array(int *a, int n);
    where n is the number of elements of the array to be printed
    Numbers must be separated by comma, followed by a space
    The numbers should be displayed in the same order as they are stored in the array
    You are allowed to use printf
'''
#Answer
'''
#include "main.h"
#include <stdio.h>

/**
 * print_array - display array by input n
 * @a  : string pointer str
 * @n : integer n for number of array
 *
 * Return: none
 *
 * Example : print_array("Hello World", 5)
 */

void print_array(int *a, int n)
{
        int count;

        count = 0;

        while (count < n)
        {
                if (count == (n - 1))
                {
                        printf("%d", *(a + count));
                }
                else
                {
                        printf("%d, ", *(a + count));
                }
                count++;
        }
        printf("\n");
}

'''
#Task 9 
'''

    Prototype: char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

    Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
'''
#Answer 
'''
#include "main.h"

/**
* *_strcpy - copy both arrays
* @dest  : string pointer dest, to be copied from src
* @src : str point array src
*
* Return: Always @dest (Success)
*
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
#Task 10 
'''
Write a function that convert a string to an integer.

    Prototype: int _atoi(char *s);
    The number in the string can be preceded by an infinite number of characters
    You need to take into account all the - and + signs before the number
    If there are no numbers in the string, the function must return 0
    You are not allowed to use long
    You are not allowed to declare new variables of “type” array
    You are not allowed to hard-code special values
    We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
'''

#Answer 
'''

#include "main.h"

/*char *_strcompareInt(char *dest, char *src);*/
int char2int(char *str);

/**
*_atoi - extract integer from input s
*
* @s : str point array input s
*
* Return: int integer value (Success)
*
*/

int _atoi(char *s)
{
        int result;

        /*_strcompareInt(result, s);*/
        result = char2int(s);

        return (result);
}


/**
* *char2int - compare stc and convert from char array to integer
*  @str : str point array
*
* Return: Integer result (Success)
*
*/
int char2int (char *str)
{
        unsigned int result = 0; /* result of char to integer coversion */
        int sign = 1;  /* to indicate if - or +* default to +*/
        int count = 0; /* counter for accessing the array */
        int length = _strlen(str);
        int num_become_char = 0;
        /*flag to detect when the access the string next char */
        /*after number is non numerical thus will ignore the rest of the string */

        /* for (count = 0; str[count] != '\0' ; count++) */
        for (count = 0; count < length; count++)
        {
                if (num_become_char == 0)
                        /* if the num_become_char is still false 0 */
                {
                        if (str[count] == '-')
                        /* if str[count] is negative sign */
                        {
                                sign = -1 * sign; /* multiply current sign factor by -1 */
                        }
                        else if ((str[count] >= '0') && (str[count]  <= '9'))
                                /* if str between 0 and 9 , converted to integer */
                        {
                                result = result * 10 + (str[count] - '0');
/* multiple each numerical by 10 if more digit found */
/* -'0' is char  to integer */
                        }
                        else /*other character including + sign */
                        {
                                if ((str[count - 1] >= '0') && (str[count - 1] <= '9'))
                                /* found the previous str[count] is numerical */
                                {
                                        num_become_char = 1;
                                        /* set the num_become_char flag to be 1 thus will exit the loop*/
                                }
                        }
                }
                else
                {
                        result = result * sign; /* multiply result with sign */
                        return (result); /* return result and terminate the program */
                }
        }
        result = result * sign; /* multiply result with sign */
        return (result); /* return result */
}

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
 *
 * Return: integer value of length of *s
 * * Example : _strlen(aa)
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

