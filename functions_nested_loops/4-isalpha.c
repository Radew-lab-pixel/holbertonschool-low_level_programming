#include "main.h"

/* more headers goes there */

/**
 * function _isalpha - Entry point c
 *
 * Paramter c - entry point c
 *
 * Description: compare c is letter, lower or upper case
 *
 * Return: Always 1 (Success) else 0
 */
int _isalpha(int c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if  (c == lower[i] || c == upper[i])
		{
			return (1);
		}
	}
	return (0);
}
