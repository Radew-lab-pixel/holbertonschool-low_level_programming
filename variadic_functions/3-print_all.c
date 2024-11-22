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
	char *str; 
	int count = 0;

	va_list argptr; /*declaring va_list argptr */

	va_start(argptr, format); /*intialing argptr */

	while ((format[count] != '\0') && (format != NULL))
	{
		switch (format[count]) /* get current format[]*/
		{
			case 'c':
				printf("%c", va_arg(argptr, int));
				break;

			case 'i':
				printf("%i", va_arg(argptr, int));
				break;

			case 'f':
				printf("%f", va_arg(argptr, double));
				break;

			case 's':
				str = va_arg(argptr, char*);
				if (str == NULL) 
				{
					str = "(nil)";
				}
				printf("%s", str);
				break;

			default:
				break;
		}

		if (format[count + 1] != '\0') /* if next format[] is not \0*/
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
	va_end(argptr); /*end va_list argptr */
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
