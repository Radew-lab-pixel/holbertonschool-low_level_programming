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
'''

##Task 3: Write a program that multiplies two numbers.

    Your program should print the result of the multiplication, followed by a new line
    You can assume that the two numbers and result of the multiplication can be stored in an integer
    If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

3-mul.c
'''
