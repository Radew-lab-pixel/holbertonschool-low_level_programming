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


int cal_prime(int num, int count) 
{
	 if (num == 0)
        {
                return (0); /* 0 is not or is prime */
        }

        if (num  == 1)
        {
                return (0); /* 1  is not prime */
        }
        if (num / 2)
        {
                return (0); /* 2 division is not prime */
        }

	
	if ((num % count) == 0)
	{
		return (1);
	}
	 
	
		return (cal_prime(num, count++));
	}
