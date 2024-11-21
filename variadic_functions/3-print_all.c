#include "variadic_functions.h"

void print_char(va_list argptr);
void print_int(va_list argptr);
void print_float(va_list argptr);
void print_string(va_list argptr);

/**
 * print_all - print all argument
 *
 * @format : format operand that determine the datatype
 * unable to change content and address of format
 * Return: void
 */

void print_all(const char * const format, ...)
{
    	/*char *form; */
        /*void (*f)(va_list);*/
	int count = 0;
	char *result;

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
		};
	
	va_list argptr; /*declaring argptr variadic list */
	va_start (argptr, format); /*intialize argptr */

	while (count < 5)
	{
		if (strcmp(ops[count].form, format) == 0) /* matched */
		{
			ops[count].f(argptr); /* callback function */
			count = 5; /* exit the loop */
		}
		count++;
	}
	return;
}

/**
 * print_char - print char function link to callback
 *
 * @argptr : va_list variable
 * Return: void
 */
void print_char(va_list argptr)
{
	printf("%c", va_arg(argptr, char));
}

/**
 * print_int - print int function
 * @argptr : va_list variable
 * Return: void
 */
void print_int(va_list argptr)
{
	printf("%d", va_arg(argptr, int));
}

/**
 * print_float - print float function
 * @argptr : va_list variable
 * Return: void
 */
void print_float(va_list argptr)
{
	printf("%f", va_arg(argptr, float));
}

/**
 * print_string - print string function
 * @argptr : va_list variable
 * Return: void
 */

void print_string(va_list argptr)
{
	printf("%s", va_arg(argptr, char *);
}
