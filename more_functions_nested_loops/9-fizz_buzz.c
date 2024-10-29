#include <stdio.h>

/**
 * main - first entry
 * @void  : nil input
 *
 * Return: 0  ( Successful )
 **
 * Example:
 **/

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0) /* find multiple of 3 */
		{
			printf("Fizz");
		}
		if ((i % 5) == 0) /* find multiple of 5 */
		{
			printf("Buzz");
		}
		if (((i % 3) != 0) && ((i % 5) != 0)) /* if none multiple of 3 or 5 */
		{
			printf("%d", i);
		}
		if (i != 100) /* only add space if i not 100 */
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
