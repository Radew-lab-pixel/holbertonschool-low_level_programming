#include "main.h"

/**
 * _isalpha - compare input is letter, lower or upper case
 * @c : First operand int c
 * Return: Always 1 (Success) else 0
 * Example:
 * _isalpha('A') -> 1
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
