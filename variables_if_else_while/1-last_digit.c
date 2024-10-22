#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if n is negative,positive or zero'
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*compare if last_digit of n is 0, >5  or <6  */
last_digit = n % 10;
printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
{ printf("and is greater than 5\n");
}
else if (last_digit == 0)
{ printf("and is 0");
}
else
{ printf("and is less than 6 and not 0\n");
}
return (0);
}
