#ifndef VARI_FUNC_H
#define VARI_FUNC_H

#include <stdio.h>
#include <stdarg.h>

/*
 * struct ops - Struct ops
 * @form : format operand
 * @f : the callback function associated
 */

typedef struct ops
{
	char *form;
	/*char form;*/
	void (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
