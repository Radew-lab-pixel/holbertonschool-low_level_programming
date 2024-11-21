#include "variadic_functions.h"

/**
 * print_numbers - function to process variadic arguments
 * @separator : seperator identifier
 * @n : detected no. of integer variable which last fixed argument param
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	int result;

	/* Declare a variable of type va_list. */
	va_list argptr;

	/* Initialize that variable where n is last fixed parameter in arguments*/
	va_start(argptr, n);

	/* checker want if separator is null, ignored it */
	if (separator == NULL)
	{
		separator = "";
		/* const char * still change content but not address */
	}

	/* checker want to display 0 despite n == 0 */
	if (n == 0)
	{
		printf("\n");
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
	va_end(argptr);/* End use of the argptr variable. */
	/*return;  not needed for void return */
}
