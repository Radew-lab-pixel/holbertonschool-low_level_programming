# Week 5 C - Recursion
## Task 0 : Write a function that prints a string, followed by a new line.

    Prototype: void _puts_recursion(char *s);

0-puts_recursion.c 
'''
#include "main.h"

/**
 * _puts_recursion : print string followed by a new line
 *
 * Description : take char *s and print new line
 *
 * @s : input parameter string s
 *
 * Return : void (Always)
 */

void _puts_recursion(char *s)
{
        /* s is end of line */
        if (*s == '\0')
        {
                _putchar('\n'); /*newline*/
                return; /* exit */
        }
        _putchar(*s);
        _puts_recursion(s + 1);

}
'''

##Task 1 : Write a function that prints a string in reverse.

    Prototype: void _print_rev_recursion(char *s);

1-print_rev_recursion.c
'''
#include "main.h"

/**
 * _puts_rev_recursion - Entry point
 *
 * Description: 'take input string and print reverese line'
 * @s: input string
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
        /* s is end of line */
        if (*s == '\0')
        {
                return; /* exit */
        }

        _print_rev_recursion(s + 1);
        _putchar(*s);
}
'''

##Task 2 : Write a function that returns the length of a string.

    Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

2-strlen_recursion.c
