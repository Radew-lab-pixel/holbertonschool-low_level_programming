#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * Description : multiply two numbers
 * @argc : number of argument ( number entered )
 * @argv : argument arrays ( number entered )
 *
 * Return: 0(Always)
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3) /* 3 argc including command */
	{
		printf("Error\n");
		return (0);
	}
	num1 = atoi(argv[1]); /* string to integer */
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
