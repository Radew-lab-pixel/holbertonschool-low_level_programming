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
'''

##Task 4 : Write a program that adds positive numbers.

    Print the result, followed by a new line
    If no number is passed to the program, print 0, followed by a new line
    If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
    You can assume that numbers and the addition of all the numbers can be stored in an int

4-add.c
'''
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int check_argv(char *s);
int _isalpha(int c);

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

        result = 0;
        argv++;

        while (argc > 1) /* ignore 1st argv[]*/
        {
                argv_Alpha = check_argv(*argv);

                if (argv_Alpha == 1) /*alphabet found in current argv[]*/
                {
                        printf("Error\n");
                        return (0);
                }

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
'''
