##C - Pointers, arrays and strings

#Task 0 : 
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

#include "main.h"

/**
 * print_most_numbers - print number 0 to 9 except 2 and 4
 * @void  : none input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_numbers()  -> 0 .. 9
 **/

void print_most_numbers(void)
{
        int i = 0;

        while (i <= 9)
        {
                if ((i != 2) && (i != 4))
                {
                        _putchar(i + '0');
                }
                i++;
        }
        _putchar('\n');

}
'''

#Task 5 : 

'''
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

    Prototype: void more_numbers(void);
    You can only use _putchar three times in your code
'''

#Answer 
'''
#include "main.h"

/**
 * more_numbers - print number 0 to 14 ten times
 * @void  : none input
 *
 * Return: none  ( Successful )
 *
 *
 * Example : print_numbers()  -> 0 .. 14
 **/

void more_numbers(void)
{
        int i = 0;
        int j = 0;

        while (i <= 9)
        {
                while (j <= 14)
                {
                        int whole = j / 10 ; /* whole number of j */
                        int remain = j % 10; /* remainder of j */

                        if (whole == 1) /* whole number is 1 eg from 10 or 12 */
                        {
                                _putchar(whole + '0'); /* putchar whole which is 1 */
                        }
                        _putchar(remain + '0'); /* remainder of j */
                        j++;
                }
                i++;
                j = 0;

                _putchar('\n');
        }

}
'''

#Task 6 
'''
Write a function that draws a straight line in the terminal.

    Prototype: void print_line(int n);
    You can only use _putchar function to print
    Where n is the number of times the character _ should be printed
    The line should end with a \n
    If n is 0 or less, the function should only print \n
'''
 
#Answer 
'''
#include "main.h"

/**
 * print_line - print line n times
 * @n  : integer input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_line(2) -> __
 **/

void print_line(int n)
{
        int i = 1;

        while ((i <= n) && (n != 0))
        {
                _putchar('_');
                i++;
        }
        _putchar('\n');

}
'''

#Task 7 
'''
Write a function that draws a diagonal line on the terminal.

    Prototype: void print_diagonal(int n);
    You can only use _putchar function to print
    Where n is the number of times the character \ should be printed
    The diagonal should end with a \n
    If n is 0 or less, the function should only print a \n
'''

#Answer

'''
#include "main.h"
/**
 * print_diagonal  - print diagonal line n times
 * @n  : integer input
 *
 * Return: none  ( Successful )
 *
 * Example : print_diagonal(2)
 **/
void print_diagonal(int n)
{
        int i, j;

        if (n > 0) /* go through the process only if n > 0*/
        {
                for (i = 1; i <= n; i++) /*n number of lines*/
                {
                        for (j = 1; j <= n; j++) /*n number of the spacing*/
                        {
                                if (j == i) /*j line spacing counter is equal to number of line counter i*/
                                {
                                        _putchar('\\');
                                }
                                else if (j < i) /* if j not reaching i counter, add space*/
                                {
                                        _putchar(' ');
                                }
                                else /* added to remove extra space if j reached end of counter i which is also n */
                                {
                                }
                        }

                        _putchar('\n'); /* a new line*/
                }
        }
        else /* if n < 0 , print a newline only */
        {
                _putchar('\n');
        }
}
'''

#Task 8 :
'''
Write a function that prints a square, followed by a new line.

    Prototype: void print_square(int size);
    You can only use _putchar function to print
    Where size is the size of the square
    If size is 0 or less, the function should print only a new line
    Use the character # to print the square
'''

#Answer 
'''
#include "main.h"

/**
 * print_square - print square n times
 * @size  : integer input
 *
 * Return: none  ( Successful )
 *a
 *
 * Example : print_square(2)
 **/

void print_square(int size)
{
        int i = 0;
        int j = 0;

        if (size > 0)
        {
                for (j = 0; j < size; j++) /* number of row loop */
                {
                        for (i = 0; i < size; i++) /* number of space # loop */
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }
}
'''

#Task 9 
'''
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

    Each number or word should be separated by a space
    You are allowed to use the standard library


'''

#Answer 
'''
#include <stdio.h>

/**
 * main - first entry
 * @void  : nil input
 *
 * Return: 0  ( Successful )
 **
 * Example:
 **/

int main(void)

{
        int i;

        for (i = 1; i <= 100; i++)
        {
                if ((i % 3) == 0) /* find multiple of 3 */
                {
                        printf("Fizz");
                }
                if ((i % 5) == 0) /* find multiple of 5 */
                {
                        printf("Buzz");
                }
                if (((i % 3) != 0) && ((i % 5) != 0)) /* if none multiple of 3 or 5 */
                {
                        printf("%d", i);
                }
                if (i != 100) /* only add space if i not 100 */
                {
                        printf(" ");
                }
        }
        printf("\n");
        return (0);
}
'''

#Task 10 
'''
Write a function that prints a triangle, followed by a new line.

    Prototype: void print_triangle(int size);
    You can only use _putchar function to print
    Where size is the size of the triangle
    If size is 0 or less, the function should print only a new line
    Use the character # to print the triangle
'''

#Answer 
'''
#include "main.h"

/**
 * print_triangle - print triangle n times
 * @size  : integer input
 *
 * Return: none
 *
 * Example : print_triangle
 */

void print_triangle(int size)
{
        int row, column;

        if (size > 0)
        {
                for (row = 1; row <= size; row++) /* no, of rows */
                {
                        for (column = 1; column <= size; column++) /*no, of column */
                        {
                                if ((column + row) >= (size + 1)) /* sum of column and row is greater than size */
                                {
                                        _putchar('#');
                                }
                                else
                                {
                                        _putchar(' ');
                                }
                        }
                                _putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }

} 
'''
