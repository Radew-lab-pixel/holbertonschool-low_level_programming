#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
