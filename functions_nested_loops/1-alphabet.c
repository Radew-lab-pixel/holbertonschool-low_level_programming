#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: ' program that prints _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a = 'a';
	while ( a < 'z')
	{ 
	_putchar(a);
	a++;
	}
	_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
