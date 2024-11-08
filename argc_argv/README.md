#Week 5: ARGC, ARGV
##Task 0 : Write a program that prints its name, followed by a new line.

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
##Task 1 : Write a program that prints the number of arguments passed into it.

    Your program should print a number, followed by a new line

1-args.c

'''
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
'''
## Task 2 : Write a program that prints all arguments it receives.

    All arguments should be printed, including the first one
    Only print one argument per line, ending with a new line

2-args.c
'''
