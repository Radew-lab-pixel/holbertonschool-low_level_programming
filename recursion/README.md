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

