#include "main.h"

/**
 * more_numbers - print number 0 to 14 ten times
 * @void  : none input
 *
 * Return: none  ( Successful )
 *
 *
 * Example : print_numbers()  -> 0 .. 14
 **/

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 14)
		{
			int whole = j / 10 ; /* whole number of j */
			int remain = j % 10; /* remainder of j */

			if (whole == 1) /* whole number is 1 eg from 10 or 12 */
			{
				_putchar(whole + '0'); /* putchar whole which is 1 */
			}
			_putchar(remain + '0'); /* remainder of j */
			j++;
		}
		i++;
		j = 0;

		_putchar('\n');
	}

}
