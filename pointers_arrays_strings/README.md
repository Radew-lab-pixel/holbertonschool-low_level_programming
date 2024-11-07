# Week 5 C - Even more pointers, arrays and strings

    What are pointers to pointers and how to use them
    What are multidimensional arrays and how to use them
    What are the most common C standard library functions to manipulate strings

## Task 0 : Write a function that fills memory with a constant byte.

    Prototype: char *_memset(char *s, char b, unsigned int n);
    The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
    Returns a pointer to the memory area s

FYI: The standard library provides a similar function: memset. Run man memset to learn more. 

0-memset.c
'''
#include "main.h"

/**
 * _memset - alter the array s  detail with char b data
 * @s  : string pointer str s
 * @b : char b to eplaced with
 * @n : array range that to be altered
 * Return: s ( successful )
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
        int count;

        /*length = _strlen(s); */
        /* obtain of length of array s */

        /* unsigned int unsigned_length = (unsigned int) length; */

        if ((int) n > 0) /* failsafe to check <= length*/
        {
                for (count = 0; count < (int) n; count++)
                {
                        s[count] = b; /* replace s[count] with char b */
                }
        }

        return (s);
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
##Task 1 : Write a function that copies memory area.

    Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
    The _memcpy() function copies n bytes from memory area src to memory area dest
    Returns a pointer to dest

FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.

1-memcpy.c
'''
#include "main.h"

/**
 * _memcpy - copy n number of array from src to dest
 * @src  : string pointer str src
 * @dest : string pointer str dest
 * @n : array range that to be altered
 * Return: s ( successful )
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int count;

        if ((int) n > 0) /* failsafe to check n > 0*/
        {
                for (count = 0; count < (int) n; count++)
                {
                        dest[count] = src[count]; /* replace s[count] with char b */
                }
        }

        return (dest);
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

##Task 2 : Write a function that locates a character in a string.

    Prototype: char *_strchr(char *s, char c);
    Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.

2-strchr.c 
'''
#include "main.h"
#include <stddef.h>

/**
 * _strchr - search for char c in string
 * and remove all characteres prior char c and
 * keep the rest after
 * @s : string pointer s
 * @c : string pointer c
 *
 * Return: s ( successful )
 *
 */

char *_strchr(char *s, char c)
{
        while (*s != '\0') /* current *s not equal 0 or '\0' */
        {
                if (*s == c) /* current *s matches char c */
                {
                        return (s); /* return string s */
                }
                /*else */
                /* else increase s pointer address */

                s++;

        }


/* if ch is '\0', you should return */
/* the pointer to the `\0` of the string str */


        if (*s == c)
        {
                return (s);
        }

        return (NULL);
        /* return (NULL) */
}
'''

##Task 3 : Write a function that gets the length of a prefix substring.

    Prototype: unsigned int _strspn(char *s, char *accept);
    Returns the number of bytes in the initial segment of s which consist only of bytes from accept

FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.

3-strspn.c 
'''
#include "main.h"
#include <stddef.h>

/**
 * _strspn - search for matching char in the intial word
 * and return the number matched
 *
 * @s : string pointer s where intial matching word is stored
 * @accept : char containing chars to be matched
 *
 * Return: int of the number of matched character
 *
 */

unsigned int _strspn(char *s, char *accept)

{       unsigned int counter = 0;
        /* counter for matched characters */
        unsigned int counter_ref = 0;
        /*counter for reference is *s == *accept is achieved */

        char *begin_accept = accept;
        /* *accept pointer is only -> one direction thus store begin location */

        while (*s != '\0') /* current *s not equal 0 or '\0' */
        {
                counter_ref = counter;
                /* stored the matched char counter for reference */

                accept = begin_accept; /* reset *accept address to [0] */

                while (*accept != '\0') /* accept is not end of line */
                {
                        if (*s == *accept) /* current *s matches current *accept */
                        {
                        counter++; /* increase counter value */
                        }

                        accept++; /* increase *accept address pointer by 1 */
                }

                if (counter == counter_ref) /* no change in counter meant no match */
                {
                        return (counter); /* terminate and return the matched counter */
                }

                s++; /* increase *s address pointer by 1 */
        }


        return (counter);
        /* return counter */
}
'''

##Task 4 : Write a function that searches a string for any of a set of bytes.

    Prototype: char *_strpbrk(char *s, char *accept);
    The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
    Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

4-strpbrk.c 
'''
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search for matching char in the intial word
 * and return the matched characters
 *
 * @s : string pointer s where intial matching word is stored
 * @accept : char containing chars to be matched
 *
 * Return: int of the number of matched character
 *
 */

char *_strpbrk(char *s, char *accept)

{
        /*unsigned int counter = 0; */
        /*counter for matched characters */
        /*unsigned int counter_ref = 0;*/
        /*counter for reference is *s == *accept is achieved */

        char *begin_accept = accept;
        /* *accept pointer is only -> one direction thus store begin location */

        while (*s != '\0') /* current *s not equal 0 or '\0' */
        {
                /*counter_ref = counter;*/
                /* stored the matched char counter for reference */

                accept = begin_accept; /* reset *accept address to [0] */

                while (*accept != '\0') /* accept is not end of line */
                {
                        if (*s == *accept) /* current *s matches current *accept */
                        {
                        /* counter++; */
                        /* increase counter value */

                        return (s) ; /* terminate and return remaining *s */
                        }
                        accept++; /* increase *accept address pointer by 1 */
                }

                s++; /* increase *s address pointer by 1 */
        }

        if (*s == '\0') /* reach end of line of s */
        {
                return (0); /* return 0 - NULL */
        }

        return (s);

}
'''
#Task 5 : Write a function that locates a substring.

    Prototype: char *_strstr(char *haystack, char *needle);
    The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
    Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.

5-strstr.c 
'''
#include "main.h"
/**
 * _strstr - find needle  in haystack
 * @haystack  : string pointer search target
 * @needle: string pointer  to be based on
 * Return: char haystack match else 0 if no match
 */

char *_strstr(char *haystack, char *needle)
{
        int count;
        int match = 0;
        /* match flag if haystack and needle matches */
        int length = _strlen(needle);

        /* length of needle */
        if (length == 0)

        /* failsafe if length is 0 */
        {
                return (haystack);
                /* return haystack and exit */
        }
        while (*haystack != '\0')
        {       count = 0; /* reset count to 0 */
                if (haystack[count] == needle[count]) /* first match found ! */
                {
                        match = 1;
                        /* match found with first character of needle and among s array */
                        count = 1;
                        /* forward count by 1 */

                        /* count < needle length & match found */
                        while ((count < length) && (match == 1))
                        {
                                if (haystack[count] == needle[count])
                                {
                                        count++; /* increase both haystack and needle array position by 1 */
                                        match = 1; /* reaffirm match is found */
                                }
                                else     /* there a mismatch along the search */
                                {
                                        match = 0; /* match reset to 0 */
                                }
                        }
/* count and length the same while  match also is 1 entire needle string matches a word in haystack */
                        if ((count == length) & (match == 1))
                        {
                                return (haystack);
                        }
                }
                haystack++;
/* progress to next char in haystack */
        }
        if (*haystack == '\0') /* reach end of line of haystack */
        {
                return (0); /* return 0 - NULL */
        }
        return (haystack);
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

#Task 6 : Write a function that prints the chessboard.

    Prototype: void print_chessboard(char (*a)[8]);

7-print_chessboard.c 

'''

#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a  : 2D array with 8 columns
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
        /* length of first row or number of column */
        int length = _strlen(a[0]);

        int row = 0;
        int column = 0;

        if (length < 8) /* failsafe if length is not 8 */
        {
                return;
                /* return  and exit */
        }
        while (row < 8)
        {
                column = 0; /*column reset to 0 */
                while (column < 8)
                {
                        _putchar(a[row][column]);
                        column++;
                }
                _putchar('\n');
                row++;
        }
        return;  /*successful */
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

##Task 7 : Write a function that prints the sum of the two diagonals of a square matrix of integers.

    Prototype: void print_diagsums(int *a, int size);
    Format: see example
    You are allowed to use the standard library

8-print_diagsums.c 
'''
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculate the forward and backward
 *
 * Description : value of the diagonal sum of the square matrix
 * @a  : char 2D array with square columns
 * @size : int size of row and column of array a
 * Return: void
 */

void print_diagsums(int *a, int size)
{
        /* counter */
        int count = 0;

        /* when 2D array passed as pointer *a */
        /* pointer a stored the passed 2D array as 1D array */
        /* value of diagnonal summation */
        int sum_forward = 0;
        int sum_backward = 0;

        while (count < (size * size))
        {
                /* sum of forward diagnoal */
                sum_forward = sum_forward + a[count];

                /* increment of the count */
                count = count + size + 1;
        }

        /* backward diagonal summation */
        count = size - 1; /* first backward search position of *a */

        while (count < size * size - 1)
        {
                sum_backward = sum_backward + a[count];
                count = count + size - 1;
        }

        printf("%d, %d\n", sum_forward, sum_backward);

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

