#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int check_argv(char *s);
int _isalpha(int c);

/**
 * main - main entry
 * Description: Add all numbers
 * @argc: number of argument
 * @argv: arrays of argument passed
 */

int main (int argc, char *argv[])
{
	int result, reading;

        result = 0;
	argv++;

	while (argc > 1) /* ignore 1st argv[]*/
	{	
		check_argv(*argv)
		reading = atoi(*argv);
		if (reading == 0)
		{
			printf("Error\n");
			return (0); /* exit */
		}
		else
		{
			result = result + reading;
		}
		argc--;
		argv++;
	}
	
	printf("%d\n", result);	
	return (0);
}

int check_argv(char *s)
{	
	int result;

	while (s != '\0')
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
