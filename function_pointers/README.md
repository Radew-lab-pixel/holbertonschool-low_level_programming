##Week 7 - C - Function pointers

#Task 0 :  What's my name
mandatory

Write a function that prints a name.

    Prototype: void print_name(char *name, void (*f)(char *));


0-print_name.c
'''
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: callback function that to be used
 *
 * Return: Nothinh.
 */


void print_name(char *name, void (*f)(char *))
{
        char *tname = name; /* pointer to name */

        f(tname); /* callback function to printf the name */

        /* return; -- removed due to betty */
}
'''
#Task 1 : If you spend too much time thinking about a thing, you'll never get it done 
Write a function that executes a function given as a parameter on each element of an array.

    Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
    where size is the size of the array
    and action is a pointer to the function you need to use

1-array_iterator.c
'''
#include "function_pointers.h"

/**
 * array_iterator -  execute each element of an array
 *
 * @array: pointer to integer array
 * @size: size of the array
 * @action : callback function of printf
 *
 * Return: Nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
        size_t count = 0;

        int *tarray = array; /* pointer to array */

        /*if (size < 0)*/
        /*      exit(0); */

        for (count = 0; count < size; count++)
        {
                action(tarray[count]);
        }
        /*return; -- removed due to betty */
}
'''
#Task 2 : To hell with circumstances; I create opportunities 

Write a function that searches for an integer.

    Prototype: int int_index(int *array, int size, int (*cmp)(int));
    where size is the number of elements in the array array
    cmp is a pointer to the function to be used to compare values
    int_index returns the index of the first element for which the cmp function does not return 0
    If no element matches, return -1
    If size <= 0, return -1

2-int_index.c

'''

#include "function_pointers.h"

/**
 * int_index -  return the first index of the matched content of array
 *
 * @array: pointer to integer array
 * @size: size of the array
 * @cmp : callback function of comparing each variable of array
 *
 * Return: integer of first index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
        /* call back function reference */
        /*index = int_index(array, 20, is_98) */
        /* int is_98(int elem) */
        /* return (98 == elem); */

        int *tarray = array; /* copy of array */
        int count = 0;
        int flag;

        if (size <= 0)
        {
                return (-1);
        }

        if ((tarray == NULL) || (cmp == NULL))
        {
                return (-1);
        }

        for (count = 0; count < size; count++)
        {
                flag = cmp(tarray[count]);
                if (flag != 0)
                {
                        return (count);
                }
        }
        return (-1);
}
'''

#Task 3 : A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

    You are allowed to use the standard library
    Usage: calc num1 operator num2
    You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
    operator is one of the following:
        +: addition
        -: subtraction
        *: multiplication
        /: division
        %: modulo
    The program prints the result of the operation, followed by a new line
    You can assume that the result of all operations can be stored in an int
    if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
    if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
    if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

This task requires that you create four different files.

3-calc.h
'''
#ifndef SCALC_H
#define SCALC_H

#include <stdio.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
        char *op;
        int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
'''

3-op_functions.c
'''
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add a and b
 * @a: integer a
 * @b: integer b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
        return (a + b);
}

/**
 * op_sub -  a subtract b
 * @a: integer a
 * @b: integer b
 * Return: subtract of a and b
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul -  a multiply b
 * @a: integer a
 * @b: integer b
 * Return: multiply of a and b
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div -  a divided by  b
 * @a: integer a
 * @b: integer b
 * Return: division of a and b
 */

int op_div(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a / b);
}

/**
 * op_mod -  remainder from a diveded by b
 * @a: integer a
 * @b: integer b
 * Return: Remainder of a and b
 */

int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a % b);
}
'''

3-get_op_func.c
'''
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - search for respective function
 *
 * @s: char s for operator
 * Description : integer passed in  call back function
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{

        op_t ops[] = {
                {"+", op_add},
                {"-", op_sub},
                {"*", op_mul},
                {"/", op_div},
                {"%", op_mod},
                {NULL, NULL}
                };
        int i = 0;
        /*char *ts;  copy of the s */

        /* typedef struct op */
        /*{ */
        /* char *op; */
        /* int (*f)(int a, int b); */
        /*} op_t; */

        while (i < 5)
        {
                /*if (ops[i].op == ts)*/
                if ((strcmp(ops[i].op, s)) == 0) /* matched found */
                {
                        return (ops[i].f);
                }
                i++;
        }
        printf("Error\n");
        exit(99);
        return (ops[5].f);
}
'''

3-main.c
'''
#include "3-calc.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * @argc: no. of argument passed
 * @argv: array of arguments passed
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
        int result, num1, num2;
        char *op; /* operand*/
        /*va_list args; list of variadic lists */
        /* va_start(args, **tagrv);  enabled variadic access */

        if ((argc < 4) || (argc > 4)) /* less than 4 arguments */
        {
                /*return (NULL)*/
                /*return (0);*/
                printf("Error\n");
                exit(98);
        }
        /* argv[1] and argv[3] are digit */
        /* if i use isdigit , it causes segmentation error*/
        /*as too many isdigit in if loop*/
        /*if (((isdigit(argv[1])) != 0) && ((isdigit(argv[3])) != 0)) */
        /*{ */
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        /*op = *(argv[2]);*/
        op = (char *) argv[2];
        /*int (*get_op_func(char *s))(int, int);*/
        result = get_op_func(op)(num1, num2);
        printf("%d\n", result);
        return (0);
        /*return (NULL); */
        /*return (0); */
}
'''

