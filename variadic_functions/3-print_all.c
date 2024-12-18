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
	char *operand;

	va_list argptr; /*declaring va_list argptr */

	if (format == NULL)
	{
		printf("\n");
		return; /*terminate */
	}
	va_start(argptr, format); /*intialing argptr */

	operand = ", "; /* operand between arg */

	while ((format[count] != '\0') && (format != NULL))
	{
		/* if (format[count + 1] == '\0')  if next format[] is not \0*/
		/*	operand = ""; */
		switch (format[count + 1])
				{
						case '\0':
						operand = "";
						break;

					default:
						break;
				}

		switch (format[count]) /* get current format[]*/
		{
			case 'c':
				printf("%c%s", va_arg(argptr, int), operand);
				break;
			case 'i':
				printf("%i%s", va_arg(argptr, int), operand);
				break;
			case 'f':
				printf("%f%s", va_arg(argptr, double), operand);
				break;
			case 's':
				str = va_arg(argptr, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", str, operand);
				break;
			default:
				break;
		}

		/*if (format[count + 1] == '\0')  if next format[] is not \0 */
		/*operand = ""; */
		/*printf(", ");*/
		count++;
	}
	printf("\n");
	va_end(argptr); /*end va_list argptr */
	/*return;*/
}
