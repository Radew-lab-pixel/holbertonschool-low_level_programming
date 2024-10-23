#include "main.h"

/**
 * _islower - Entry point
 * c - input character
 *
 * Description : Take  c and compare if lowercase
 *
 * Return: 1 (Success) else 0
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
