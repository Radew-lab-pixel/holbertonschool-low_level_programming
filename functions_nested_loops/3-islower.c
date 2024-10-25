#include "main.h"

/**
 * _islower - check if input  c is lowercase 
 * @c : input character
 *
 * Return: 1 (Success) else 0
 * Example:
 * _islower(f) -> 1 
 */

int _islower(int c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
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
