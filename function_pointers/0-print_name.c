#include "function_pointers.h"

/**
 * print_name - prints a name 
 * @name: name of the person
 * @f: callback function that to be used
 *
 * Return: Nothinh.
 */


void print_name(char *name, void (*f)(char *))
{
	char *tname = name; /* pointer to name */

	f(tname); /* callback function to printf the name */
	
	return;
}
