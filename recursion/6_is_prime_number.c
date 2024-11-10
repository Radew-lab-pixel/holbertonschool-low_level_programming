#include "main.h"

int cal_prime(int num, int count);
/**
 * _is_prime_number - Entry point
 *
 * Description: 'find is n is prime number'
 * @n: input integer n
 * Return: integer value of of 0 or 1
 */

int is_prime_number(int n)

{
	/*int count = 2;*/
       	/* count start from 2 */

	int result;

	
     
	result = cal_prime(n, 2);
	
	return (result);

}


/**
 * cal_prime - Entry point
 *
 * Description: sub function to find prime of input n
 * @num: input integer n
 * @count: input integer count for recursion
 * Return: integer value of of 0 or 1
 */

int cal_prime(int num, int count)
{
        /* base 1 - count has reach num value */
        if (num == count)
        {       /* count reach value of num thus only num is dividable by num */
                return (1);
        }

        /* base 2 - num modulus count not 0  */
        if ((num % count) == 0)
        {
                if (num != count) /* reconfirm num not current count value*/
                {
                        return (0); /* num dividable by other value than itself */
                        /* not prime */
                }
        }
        /* Segmentation fault (core dumped) if use count++*/
        /* return (cal_prime(num, count++));*/
        return (cal_prime(num, count = count + 1));

}
