#include "main.h"

/**
 * _abs - print the sign of the input n
 * @n : First operand input  n
 * Return: absolute value of input n
 * Example:
 * _abs(-98) -> 98
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
