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
