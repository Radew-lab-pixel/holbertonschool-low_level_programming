TAsk 0 : Write a script that runs a C file through the preprocessor and save the result into another file.

    The C file name will be saved in the variable $CFILE
    The output should be saved in the file c
 
Answer - > 
 #!/bin/bash 
gcc -E $CFILE -o  c 
NOT gcc $VFILE -o c  


Task 1 : Write a script that compiles a C file but does not link.

    The C file name will be saved in the variable $CFILE
    The output file should be named the same as the C file, but with the extension .o instead of .c.
        Example: if the C file is main.c, the output file should be main.o

Answer -> #!/bin/bash 
	gcc $CFILE -c 
	gcc -c $CFILE -o
NOT 	gcc $CFILE -c - o 
NOT	gcc $CFILE -o 
NOT	gcc $CFILE -c -o output | mv output

Task 2 : Write a script that generates the assembly code of a C code and save it in an output file.

    The C file name will be saved in the variable $CFILE
    The output file should be named the same as the C file, but with the extension .s instead of .c.
        Example: if the C file is main.c, the output file should be main.s

Answer - > #!/bin/bash 
	gcc -S $CFILE
NOT 	gcc $CFILE -S	
NOT	gcc $CFILE -S | mv "$CFILE.o" "$CFILE.s"

Task 3 : Write a script that compiles a C file and creates an executable named cisfun.

    The C file name will be saved in the variable $CFILE

Answer : #!/bin/bash 
	gcc $CFILE -o cisfun 

Task 4 : Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

    Use the function puts
    You are not allowed to use printf
    Your program should end with the value 0

Answer 

#include <stdio.h>
/**
   main - This is the entry point of the code *
   Return - 0 Successful */


int main(void)
{       puts("\"Programming is like building a multilingual puzzle");
        return (0);
}


NOT 
#include <stdio.h>
/**
 *Print output \"Programming is like building a multilingual puzzle
 */
int main(void)
{       puts("\"Programming is like building a multilingual puzzle");
        return (0);
}


NOT 
#include <stdio.h>

/**
* main (void )  - display the output 
*
* return false 
*/

int main (void)
{       puts("\"Programming is like building a multilingual puzzle");
        return (0);
}

NOT 
#include <stdio.h>

int main (void ) 
/** main 
 display "Programming is like building a multilingual puzzle

**/
int main (void )

{

 puts ("Programming is like building a multilingual puzzle");

	return 0;

} 


[betty_code] Command to run:
betty-style 4-puts.c
su student_jail -c 'timeout 30 bash -c '"'"'betty-style 4-puts.c'"'"''
[betty_code] Return code: 1
[betty_code] Student stdout:
4-puts.c:3: ERROR: trailing whitespace
4-puts.c:3: ERROR: int main() should probably be int main(void)
4-puts.c:3: WARNING: space prohibited between function name and open parenthesis '('
4-puts.c:5: ERROR: trailing whitespace
4-puts.c:6: WARNING: space prohibited between function name and open parenthesis '('
4-puts.c:7: ERROR: trailing whitespace
4-puts.c:8: ERROR: parentheses are required on a return statement
total: 5 errors, 2 warnings, 9 lines checked
[betty_code] Student stdout length: 462
[betty_code] Student stderr:
[betty_code] Student stderr length: 0

Task 5 : 

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

    Use the function printf
    You are not allowed to use the function puts
    Your program should return 0
    Your program should compile without warning when using the -Wall gcc option


Answer :

/**
 * Description: second c program
 */

#include <stdio.h>

/**
 * main-with proper grammar, but the outcome is a piece of art,
 *
 * Return: 0 Always
 */
int main(void)
{
        printf("with proper grammar, but the outcome is a piece of art,\n");
        return (0);
}

Task 6 : Write a C program that prints the size of various types on the computer it is compiled and run on.

    You should produce the exact same output as in the example
    Warnings are allowed
    Your program should return 0
    If you are using a linux on Vagrant you might have to install the package libc6-dev-i386 to test the -m32 gcc option (normally you dont need to do anything on your sandbox)

Answer - > 

NOT 

#include <stdio.h>

/**
 * main-display size of data type,
 *
 * Return: 0 Always
 */
int main(void)
{
        printf("The total size of char data type is equal to : %ld\n", sizeof(char));
        printf("The total size of the int data type is equal to : %ld\n", sizeof(int));
        printf("The total size of long int data type is equal to : %ld\n", sizeof(long int));
        printf("The total size of long long int data type is equal to : %ld\n", sizeof(long long int));
        printf("The total size of float data type is equal to : %ld\n", sizeof(float));
        return (0);
}
