#include "main.h"

/**
 * _isdigit - check for input c is a digit and return 1 if so
 * @c : integer input c
 *
 * Return: 1  (digit)
 *
 * Example : _isdigit(9) -> return 1
 **/

int _isdigit(int c)
{
	int i = 0;

	while (i <= 9)
	{
		if (c == (i + '0'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
