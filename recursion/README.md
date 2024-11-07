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
'''
#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: 'take input string and find the length of string'
 * @s: input string
 *
 * Return: integer value of length(Success)
 */

int _strlen_recursion(char *s)
{
        /* s is end of line */
        if (*s == '\0')
        {
                return (0);  /* add 0 and exit */
        }
        /* add 1 to recursion everytime */
        return (1 + _strlen_recursion(s + 1));
}
'''
##Task 3 : Write a function that returns the factorial of a given number.

    Prototype: int factorial(int n);
    If n is lower than 0, the function should return -1 to indicate an error
    Factorial of 0 is 1
'''
3-factorial.c
'''
#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: 'take input number and calculate the factorial'
 * Formula: factorial(n) =  n * factorial (n -1 )
 * @n: input integer n
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
        /* n is 1 meant reach top  of the stacks */
        /* n is 0 meant int n originally is 0 */
        if ((n == 1) || (n == 0))
        {
                return (1); /* return 1 as factorial(1)*/
        }
        else if (n < 0)
        {
                return (-1); /* return -1 */
        }
        else
        {
        /* (n-1) cannot be negative thus if such value is ommitted in recursion */
        return (n * factorial(n - 1));
        }
}
'''
##Task 4 : Write a function that returns the value of x raised to the power of y.

    Prototype: int _pow_recursion(int x, int y);
    If y is lower than 0, the function should return -1

FYI: The standard library provides a different function: pow. Run man pow to learn more.


4-pow_recursion.c
