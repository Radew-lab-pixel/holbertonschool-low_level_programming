#include "main.h"

int cal_sqrt(int num, int count);

/**
 * _sqrt_recursion - Entry point
 *
 * Description: 'find is n is prime number'
 * @n: input integer n
 * Return: integer value of of 0 or 1
 */
int _sqrt_recursion(int n)
{
	int result;

	if (n <= 0)
	{
		return (-1); /* all 0 and negative num not welcome */
	}

	if ((n < 9) && (n > 1))
	{
		return (-1); /* no nature sqrt between 2 and 8 */
	}
	if (n == 1)
	{
		return (1); /* 1 is also sqrt of 1 */
	}
	result = cal_sqrt(n, n / 2); /* start cal_sqrt() if none above is achieve */
	/* count start with half n ( n/2) to speed the process up*/
	return (result);
}

/**
 * cal_sqrt - Entry point
 *
 * Description: sub function to find sqrt of input n
 * @num: input integer n
 * @count: input integer count for recursion
 * Return: integer value of of 0 or 1
 */

int cal_sqrt(int num, int count)
{
	/* base 0 - when count is 46340 meant */
	/* 46340 * 46340 = INT_MAX ( 2147483647) */
	if (count > 21370) /* since count = n/2 thus 21370 */
	{
		count = 21369;
	}
	/* base 1 - when count * count = 1 */
	if ((count * count) == num)
	{
		return (count); /* sqrt found, return count */
	}
	/* base 2 - when count reach 0 meaning no sqrt is found */
	if (count == 0)
	{
		return (-1); /* sqrt no found thus return -1 */
	}
	return (cal_sqrt(num, count = count - 1));

}
