#include "variadic_functions.h"

void print_char(va_list args);

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
	/*va_start (argptr, format); intialize argptr */

	while (count < 5)
	{
		if (strcmp(ops[count].form, format) == 0) /* matched */
		{
			ops[count].f; /* callback function ops[count].f */
			count = 5; /* exit the loop */
		}
		count++;
	}
	return;
}

void print_char(va_list args)
{
	va_
}
