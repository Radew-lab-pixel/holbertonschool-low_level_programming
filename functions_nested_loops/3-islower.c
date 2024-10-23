#include "main.h"

/* more headers goes there */

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print a to z
 *
 * Return: 1 (lower case) else 0 ( uppercase)
 **/
int _islower(int c)
{
	char lower[]="abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	if  (c == lower[i])
	{
		return (1);
	}
	}
	return (0);
}
