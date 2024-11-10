#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int check_argv(char *s);
int _isalpha(int c);
int cal_coins(int c, int *mint, int mint_qty);

/**
 * main - main entry
 *
 * Description : add all numbers
 * @argc : number of argument ( number entered )
 * @argv : argument arrays ( number entered )
 *
 * Return: 0( None) or sum value
 */

int main(int argc, char *argv[])
{
	int result, reading, argv_Alpha;

	int mint[] = {25, 10, 5, 2, 1};
	int mint_qty = 5; /* mint coin value qty , mint array size*/

	result = 0;
	argv++; /*forward argv to ignore ./change command */
	
	if (argc <= 1) /*only  detected ./change command*/
	{
		printf("Error\n");
		return (0);
	}

	while (argc > 1) /* ignore 1st argv[]*/
	{
		argv_Alpha = check_argv(*argv);

		if (argv_Alpha == 1) /*alphabet found in current argv[]*/
		{
			printf("Error\n");
			return (0);
		}

		reading = atoi(*argv);
		if (reading == 0) /* reading less than 0 */
		{
			printf("0\n");
			return (0); /* exit */
		}
		/*if (reading < 0) reading is -ve */	
		/*printf("negative reading : %d",reading);*/
		/*reading = reading * -1/10; don't ask me why, the bot say so */
		else
		{
			if (reading < 0)
			{
				printf("0\n");
				return (0);
			}
			/*result = result + reading;*/
			result = cal_coins(reading, mint, mint_qty);
		}
		argc--;
		argv++;
	}

	printf("%d\n", result);
	return (0);
}

/**
 * check_argv - compare s[] which is argv for
 * alphabet
 *
 * Description : check all characters if is alphabet
 *
 * @s: string array s
 *
 * Return: 1 (Alphabet detected) or 0 (none)
 */

int check_argv(char *s)
{
	int result;

	while (*s != '\0')
	{
		result = _isalpha(*s);
		if (result == 1) /* alphabet detected */
		{
			return (1); /* return 1 */
		}

		s++; /*increase s[] position */
	}
	return (0); /* end of loop, no alphabet */
}

/**
 * _isalpha - compare input is letter, lower or upper case
 *
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

/**
 * cal_coins - find the number coins for the change
 *
 * @c : First int c for the amount
 * @mint : array int for the coins value that minted
 * @mint_qty : mint coin value type
 * Return: anmount of coins
 *
 */

int cal_coins(int c, int *mint, int mint_qty)
{
	int count, coin_num, coin_needed;

	/*int length = *(&mint + 1) - mint;   &mint[5] - &mint[0]; */

	/*length = 5;  size of mint array */

	count = 0;
	coin_num = 0;
	coin_needed = 0;
	/*printf("length %d\n:",length);*/
	while (count < mint_qty)
	{
		coin_num =  c / mint[count]; /* c value divide by mint[count] */
		/*printf("amount %d coin_num %d\n", c, coin_num);*/
		coin_needed = coin_needed + coin_num;
		c = c - mint[count] * coin_num;
		count = count + 1;
	}
	return (coin_needed);

}
