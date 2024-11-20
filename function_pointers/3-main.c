#include "3-calc.h"
#include <ctype.h>

/**
 * main - main entry
 *
 * @argc - no. of argument passed
 * @argv - array of arguments passed
 *
 * Return : 0 if successful
 */

int main(int argc, char *agrv[])
{
	int result, a, b;
	char *op; /* operand*/
	/*va_list args; list of variadic lists */
	/* va_start(args, **tagrv);  enabled variadic access */

	if (argc < 4) /* less than 4 arguments */
	{
		return (NULL); 
	}
	/* argv[1] and argv[3] are digit */
	if (((isdigit(argv[1])) != 0) && ((isdigit(argv[3])) != 0))
	{
		
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2];
		/*int (*get_op_func(char *s))(int, int);*/
		result = get_op_func(op, a, b);
		printf("%d\n",result);
		return (0); 
	}
	else
	{
		return (NULL);
	}

	

}
