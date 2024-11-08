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
'''
#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: 'take input x  and raise it to power of y'
 * @x: input integer x of root value
 * @y: input integer y of power value
 * Return: integer value of result
 */

int _pow_recursion(int x, int y)
{
        /* if power value is 0 */
        if (y == 0)
        {
                return (1); /* return value 1 and terminate the recursion */
        }
        else if (y < 0)/* y can't be negative */
        {
                return (-1); /* return value -1 and terminate */
        }
        else
        {
                return (x * (_pow_recursion(x, y - 1)));
        }

}
'''
##Task 5: Write a function that returns the natural square root of a number.

    Prototype: int _sqrt_recursion(int n);
    If n does not have a natural square root, the function should return -1

FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

5-sqrt_recursion.c
'''
#include "main.h"

int cal_sqrt(int num, int count);

/**
 * _sqrt_recursion - Entry point
 *
 * Description: 'find is n is prime number'
 * @n: input integer n
 * Return: integer value of of 0 or 1
 */
int _sqrt_recursion(int n)
{
        int result;

        if (n <= 0)
        {
                return (-1); /* all 0 and negative num not welcome */
        }

        if ((n < 9) && (n > 1))
        {
                return (-1); /* no nature sqrt between 2 and 8 */
        }
        if (n == 1)
        {
                return (1); /* 1 is also sqrt of 1 */
        }
        result = cal_sqrt(n, n / 2); /* start cal_sqrt() if none above is achieve */
        /* count start with half n ( n/2) to speed the process up*/
        return (result);
}

/**
 * cal_sqrt - Entry point
 *
 * Description: sub function to find sqrt of input n
 * @num: input integer n
 * @count: input integer count for recursion
 * Return: integer value of of 0 or 1
 */

int cal_sqrt(int num, int count)
{
        /* base 0 - when count is 46340 meant */
        /* 46340 * 46340 = INT_MAX ( 2147483647) */
        if (count > 21370) /* since count = n/2 thus 21370 */
        {
                count = 21369;
        }
        /* base 1 - when count * count = 1 */
        if ((count * count) == num)
        {
                return (count); /* sqrt found, return count */
        }
        /* base 2 - when count reach 0 meaning no sqrt is found */
        if (count == 0)
        {
                return (-1); /* sqrt no found thus return -1 */
        }
        return (cal_sqrt(num, count = count - 1));

}
'''

##Task 6 : Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

    Prototype: int is_prime_number(int n);

6-is_prime_number.c
'''
#include "main.h"

int cal_prime(int num, int count);

/**
 * is_prime_number - Entry point
 *
 * Description: 'find is n is prime number'
 * @n: input integer n
 * Return: integer value of of 0 or 1
 */

int is_prime_number(int n)

{
        /*int count = 2;*/
        /* count start from 2 */

        int result;

        if (n <= 2)
        {
                return (0);
        }
        result = cal_prime(n, 2); /* count start with 2 */
        return (result);
}

/**
 * cal_prime - Entry point
 *
 * Description: sub function to find prime of input n
 * @num: input integer n
 * @count: input integer count for recursion
 * Return: integer value of of 0 or 1
 */

int cal_prime(int num, int count)
{
        /* base 1 - count has reach num value */
        if (num == count)
        {       /* count reach value of num thus only num is dividable by num */
                return (1);
        }

        /* base 2 - num modulus count not 0  */
        if ((num % count) == 0)
        {
                if (num != count) /* reconfirm num not current count value*/
                {
                        return (0); /* num dividable by other value than itself */
                        /* not prime */
                }
        }
        /* Segmentation fault (core dumped) if use count++*/
        /* return (cal_prime(num, count++));*/
        return (cal_prime(num, count = count + 1));

}
'''
