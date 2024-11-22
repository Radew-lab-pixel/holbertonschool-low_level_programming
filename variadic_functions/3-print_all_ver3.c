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
	/*  void (*f)(va_list);*/

	int count  = 0;
    	/*printf("%s", format);*/
	/*const char *ptr_format; */
	char *str;

	va_list argptr; /* declare valist variable */
	/*ptr_format = format;*/

	va_start (argptr, format); /* intialize argptr */
	
	while (format[count])
	{
		switch (format[count])
		{
			case 'c' : print_char(argptr);
				   break;
			case 'i' : print_int(argptr);
				   break;
			case 'f' : print_float(argptr);
				   break;
			case 's' : /*print_string(argptr); */
				   /*printf("%s", va_arg(argptr, char*/
					str = va_arg(argptr, char *);
					if (!str)
					{	
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break; 
		}
		count++;
	}	
	va_end(argptr);	
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
	ptr = va_arg(argptr, char *);	
	printf("String here :" );
	if (ptr == NULL)
	{
		ptr = "(nil)";
	}
	printf("%s", ptr);
	/*printf("%s", va_arg(argptr, char *));*/
}
