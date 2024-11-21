#include "variadic_functions.h"

/**
 * print_strings - function to process argument and print its content
 *
 * @separator : separator input
 * @n : no . of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *result;

	/*Declare a variable type va_list*/
	va_list argptr;
	
	/* Initialize the va variable argptr  where n is detected no. */
	va_start(argptr, n);
	
	while (count < n)
	{	
		/* get the next addition*/
		result = va_arg(argptr, char*);
		printf("%s", result);

		if (count != (n - 1)) /* not end of argument*/
		{
			printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	count++;
	}
	va_end(argptr); /* end use of va variable argptr */
}
