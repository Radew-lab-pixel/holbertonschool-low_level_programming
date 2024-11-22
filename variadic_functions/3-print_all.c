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
	/*   char *form; */
        /*char form;*/
	opt list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
		};
	
        void (*f)(va_list);
    	/*printf("%s", format);*/
	const char *ptr_format;
	
	va_list argptr; /* declare valist variable */
	
	ptr = format;
	va_start(argptr, ptr_format); /* intialize argptr */

	
		
}

/**
 * print_char - print char function link to callback
 *
 * @argptr : va_list variable
 * Return: void
 */
void print_char(va_list argptr)
{	
	/*'char' is promoted to 'int' when passed through */
	printf("%c", va_arg(argptr, int));
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
	/*  'float' is promoted to 'double' when passed throug*/
	printf("%f", va_arg(argptr, double));
	
}

/**
 * print_string - print string function
 * @argptr : va_list variable
 * Return: void
 */

void print_string(va_list argptr)
{
	char *ptr;
	
	ptr = (char *) va_arg(argptr, char *);	
	printf("String here :" );
	if (ptr == NULL)
	{
		ptr = "(nil)";
	}
	printf("%s", ptr);
	/*printf("%s", va_arg(argptr, char *));*/
}
