#Week 5: ARGC, ARGV
Write a program that prints its name, followed by a new line.

    If you rename the program, it will print the new name, without having to compile it again
    You should not remove the path before the name of the program

0-whatsmyname.c
'''
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
'''
