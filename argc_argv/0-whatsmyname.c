#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main: main input 
 * @argc: no of argv[] or argument passed 
 * @argv: array of argument passed 
 * Return: EXIT_SUCCESS; 
 */

int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
}
