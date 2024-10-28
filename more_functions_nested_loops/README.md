##Task 0 : 
''
Write a function that checks for uppercase character.

    Prototype: int _isupper(int c);
    Returns 1 if c is uppercase
    Returns 0 otherwise
'''
#Answer: 
'''
#include "main.h"

/**
 * _isupper - check for upper case OF input c and return 1 if uppercase
 * @c : integer input c
 * Return as int 1 (successful) else 0
 *
 * Example : _isupper(B) -> return 1
 **/

int _isupper(int c)
{
        char reference[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0;

        while (i < 26)
        {
                if ((c + '0') == (reference[i] + '0'))
                {
                        return (1);
                }
                i++;
        }
        return (0);
}
'''

# Task 1:

'''

Write a function that checks for a digit (0 through 9).

    Prototype: int _isdigit(int c);
    Returns 1 if c is a digit
    Returns 0 otherwise
'''
#Answer : 
'''
#include "main.h"

/**
 * _isdigit - check for input c is a digit and return 1 if so
 * @c : integer input c
 *
 * Return: 1  (digit)
 *
 * Example : _isdigit(9) -> return 1
 **/

int _isdigit(int c)
{
        int i = 0;

        while (i <= 9)
        {
                if (c == (i + '0'))
                {
                        return (1);
                }
                i++;
        }
        return (0);
}
'''

#Task 2 :
''' 
Write a function that multiplies two integers.

    Prototype: int mul(int a, int b);
'''

# Answer 
'''
#include "main.h"

/**
 * mul - multiply input a and input b
 * @a : integer input a
 * @b : integer input b
 *
 * Return: integer value of multipled value of a and b
 *
 * Example : mul( 5,4)  -> 20
 **/

int mul(int a, int b)
{
        int c = a * b;

        return (c);
}
'''

# Task 3 :
'''
Write a function that prints the numbers, from 0 to 9, followed by a new line.

    Prototype: void print_numbers(void);
    You can only use _putchar twice in your code
'''

#Answer 
'''
#include "main.h"

/**
 * print_numbers - print number 0 to 9
 * @void  : none input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_numbers()  -> 0 .. 9
 **/

void print_numbers(void)
{
        int i = 0;

        while (i <= 9)
        {
                _putchar(i + '0');
                i++;
        }
        _putchar('\n');

}
'''

#Task 4 : 
'''

Write a function that prints the numbers, from 0 to 9, followed by a new line.

    Prototype: void print_most_numbers(void);
    Do not print 2 and 4
    You can only use _putchar twice in your code
'''

#Answer 
'''


