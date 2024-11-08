#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * Description : Take command line argument
 * and display each argument line by line
 * @argc: integer argc with no. of arguments value
 * @argv: integer array of arguments
 * Return : 0 (Always)
 * Return: 0  (Always)
 */

int main(int argc, char *argv[])
{
	while (argc > 0) /* argc is positive, ignore argv[0] */
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0); /* exit successfully*/
}
