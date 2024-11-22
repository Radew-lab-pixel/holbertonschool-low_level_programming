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
	int f_count = 0;
	
	va_list argptr; /*declaring argptr variadic list */
	/*int format_length; */
	/*int strcmp_compare; */
	/*const char *pformat = format;*/
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	
	/*va_list argptr; declaring argptr variadic list */
	va_start(argptr, format); /*intialize argptr */
	
	/* format will contain the each individual format for the argu */
	/* format_length = strlen(format); */

	/*printf("Format length is %d\n", format_length); */
	printf("Format : %s", format);
	/*while (format[f_count] != '\0')  loop through format char * */
	while (format[f_count] && (format != NULL))
	{	
		/*printf("Current fomat[] is %c\n", format[format_count]);*/
		count = 0;
		while (count < 4) /* compare to ops[].f */
		{	
			/**strcmp_compare = strcmp(ops[count].form, format[format_count]); */
			/*if (strcmp_compare == 0)  matched */
			if (*ops[count].form == format[f_count])
			{	printf(", ");
			/*printf("%c matches \n", ops[count].form); */
			(ops[count].f)(argptr); /* callback function */
			/* exit the loop */
			/*valid_types[j].f(argp);*/
			
			}
			count++;
		}
		f_count++;
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
	if (ptr == NULL)
	{
		ptr = "(nil)";
	}
	printf("%s", ptr);
	/*printf("%s", va_arg(argptr, char *));*/
}
