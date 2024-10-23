#include <stdio.h>
#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: ' program that prints _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char c[] = "_putchar";
     	int i = 0;
	
	while ( i< 8 )
	{
        _putchar(c[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
