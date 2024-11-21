#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all values
 *
 * @n : list of unsigned int n and also last fixed argument
 * Return: summation value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	unsigned int result = 0;
	va_list args; /* declaring va */

	va_start(args, n); /* initalizing start of pointer */

	if (n == 0)
	{
		return (0);
	}

	for (count = 0; count < n; count++)
	{
		/*add result and advance on args */
		result = result + va_arg(args, unsigned int);
	}
	va_end(args); /*end variadic process */
	return (result);
}
