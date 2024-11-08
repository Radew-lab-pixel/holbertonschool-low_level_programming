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

	if (n <= 2)
	{
		return (0);
	}
     
	result = cal_prime(n, n / 2);
	
	return (result);

}


int cal_prime(int num, int count) 
{
	
	
	if (count == 1)
    {
        return 1;
    }
    else
    {
       if (num % count == 0)
       {
         return 0;
       }
       else
       {
         return cal_prime(num, count - 1);
       }       
    }
}
