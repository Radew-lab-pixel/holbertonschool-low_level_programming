# Project 3 : C - Functions, nested loops


##Task 0 
 Write a program that prints _putchar, followed by a new line.
 The program should return 0

##Answer: 

Warning : For loop is not allowed in these tasks.

0-putchar.c 

'''
\#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: ' program that prints _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
        _putchar('_');
        _putchar('p');
        _putchar('u');
        _putchar('t');
        _putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
        _putchar('\n');
        return (0);
}
'''
main.h 
'''
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif
'''

_putchar.c
'''
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
'''
NOT 

0-putchar.c 
#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: ' program that prints _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
        char c[] = "_putchar";
        int i = 0;

        while ( i< 8 )
        {
        _putchar(c[i]);
        i++;
        }
        _putchar('\n');
        return (0);
}


NOT 
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: ' program that prints _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

int main(void)
{
        char c[] = "_putchar";
        int progress;

        for (  int i = 0; i< 8; i++ )
        {
        progress = _putchar(c[i]);
        }
        progress =_putchar('\n');
        if ( progress == 1)
        {
        return (0);
        }
        else 
        {
        return (1);
        }
}

##Task 1
Write a function that prints the alphabet, in lowercase, followed by a new line.
Prototype: void print_alphabet(void);
You can only use _putchar twice in your code

#Answer

1-alphabet.c
'''
#include "main.h"

/* more headers goes there */

/**
 * print_alphabet - Entry point
 *
 * Description: print a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
        char a = 'a';

        while (a <= 'z')
        {
        _putchar(a);
        a++;
        }
        _putchar('\n');
}
'''

main.h
'''
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);

#endif
'''

##Task 2 :
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet_x10(void);
    You can only use _putchar twice in your code

#Answer 
2-print_alphabet_x10,c
'''
 #include "main.h"

/* more headers goes there */

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print a to z
 *
 * Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
        char a;
        int i;

        for (i = 0; i < 10; i++)
        {
        a = 'a';
        while (a <= 'z')
        {
        _putchar(a);
        a++;
        }
        _putchar('\n');
        }
}
'''

main.h
'''
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);

#endif
'''
#Task 3 
Write a function that checks for lowercase character.

    Prototype: int _islower(int c);
    Returns 1 if c is lowercase
    Returns 0 otherwise

#Answer

3-islower.c
'''
#include "main.h"

/**
 * _islower - Entry point
 * c - input character
 *
 * Description : Take  c and compare if lowercase
 *
 * Return: 1 (Success) else 0
 */
int _islower(int c)
{
        char lower[] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for (i = 0; i < 26; i++)
        {
        if  (c == lower[i])
        {
                return (1);
        }
        }
        return (0);
}

#Task 4 


