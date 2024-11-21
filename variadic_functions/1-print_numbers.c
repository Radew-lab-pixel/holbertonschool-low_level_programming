#include "variadic_functions.h"

/**
 * print_numbers - function to process variadic arguments
 * @separator : seperator identifier
 * @n : detected no. of integer variable
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	
	unsigned int count;
       	int result;

	/* Declare a variable of type va_list. */
	va_list argptr;

	/* Initialize that variable */
	va_start(argptr, n);
	
	/* checker want if separator is null, ignored it */
	if (separator == NULL)
	{
		separator = ""; 
		/* const char * still change content but not address */
	}

	for (count = 0; count < n; count++)
	{
		/* Get the next additional argument argptr. */
		result = va_arg(argptr, int);
		/* printf("%u", result); removed due to checker */
		printf("%d", result);

		if (count != (n - 1)) /*not last argumet argptr */
		{
			printf("%s", separator);
		}
		else /*last argument argptr */
		{
			printf("\n");
		}
	}
	/* End use of the argptr variable. */
	va_end(argptr);
	/*return;  not needed for void return */
}
