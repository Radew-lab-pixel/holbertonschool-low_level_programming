#include "3-calc.h"

/**
 * get_op_func - search for respective function
 *
 * @s: char s for operator
 * @int: call back function with two required integer variables
 * @Return: the processed integer variable by call back function
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
	/*{
    	/* char *op; */
    	/* int (*f)(int a, int b); */
	/*} op_t; */
	
	while (i < 5)
	{
		/*if (ops[i].op == ts)*/
		if ((strcmp (ops[i].op, s)) == 0) /* matched found */
		{
			return (ops[i].f);
		}
		i++;
	}



}
