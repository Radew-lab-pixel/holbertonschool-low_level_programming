/* Project 3 : C - Functions, nested loops
*/

Task 0 : Write a program that prints _putchar, followed by a new line.

    The program should return 0

Answer: 

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

main.h 

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif


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
