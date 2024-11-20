#include "3-calc.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * @argc - no. of argument passed
 * @argv - array of arguments passed
 *
 * Return : 0 if successful
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	char *op; /* operand*/
	/*va_list args; list of variadic lists */
	/* va_start(args, **tagrv);  enabled variadic access */

	if (argc < 4) /* less than 4 arguments */
	{
		/*return (NULL)*/
		/*return (0);*/
		printf("Error\n");
		exit(98);	
	}
	/* argv[1] and argv[3] are digit */
	/* if i use isdigit , it causes segmentation error as too many isdigit in if loop*/
	/*if (((isdigit(argv[1])) != 0) && ((isdigit(argv[3])) != 0)) */
	/*{ */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/*op = *(argv[2]);*/
	op = (char*) argv[2];
	/*int (*get_op_func(char *s))(int, int);*/
	result = get_op_func(op)(num1, num2);
	printf("%d\n",result);
	return (0); 	
	/*return (NULL); */
	/*return (0); */
}
