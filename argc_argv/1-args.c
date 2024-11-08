#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * Description : take commandline argument and output and print number
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0  (Always)
 */

int main(int argc, char *argv[])
{
	/* **argv not empty */
	if (**argv != '\0')
	{
		/* print argc - 1 ( ignore argv[0] as it command */
		printf("%d\n", argc - 1);
	}
	return (0);
}
