Task 0 : This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

    You can find the source code here
    The variable n will store a different value every time you will run this program
    You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
    The output of the program should be:
        The number, followed by
            if the number is greater than 0: is positive
            if the number is 0: is zero
            if the number is less than 0: is negative
        followed by a new line


Answer - >
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if n is negative,positive or zero'
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /*comapare if n is 0, negative or positive  */
        if (n > 0)
        {       printf("%d is positive\n", n);
        }
        else if (n < 0)
        {       printf("%d is negative\n", n);
        }
        else
        {       printf("%d is zero\n", n);
        }
        return (0);
}

NOT
 #include <stdlib.h>
#include <time.h>
/* more headers goes there */

/** 
 *main-entry point
 *return (0): always:w:w
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*comapare if n is 0, negative or positive  */
	if (n>0)
	{	printf("%d is positive\n", n);
	}
	else if (n==0)
	{	printf("%d is negative\n",n);
	}
	else 
	{	printf("%d is zero\n");
	}
	return (0);
} 
	
Task 1 : This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

    You can find the source code here
    The variable n will store a different value every time you run this program
    You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
    The output of the program should be:
        The string Last digit of, followed by
        n, followed by
        the string is, followed by
            if the last digit of n is greater than 5: the string and is greater than 5
            if the last digit of n is 0: the string and is 0
            if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
        followed by a new line

eg. Last digit of 629438752 is 2 and is less than 6 and not 0
Last digit of 954249937 is 7 and is greater than 5
Last digit of 809065140 is 0 and is 0
Answer -> 

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if last digit of n  '
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*compare if last_digit of n is 0, >5  or <6  */
last_digit = n % 10;
printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
{ printf("and is greater than 5\n");
}
else if (last_digit == 0)
{ printf("and is 0\n");
}
else
{ printf("and is less than 6 and not 0\n");
}
return (0);
}
NOT
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if last digit of n  '
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*compare if last_digit of n is 0, >5  or <6  */
last_digit = n % 10;
printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
{ printf("and is greater than 5\n");
}
else if (last_digit == 0)
{ printf("and is 0");
}
/**else if (last_digit < 6 && last_digit != 0)
{ printf(\"and is less than 6 and not 0\n\");
}**/
else 
{ printf("and is less than 6 and not 0\n"); 
}
return (0);
}

NOT
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if n is negative,positive or zero'
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*compare if last_digit of n is 0, >5  or <6  */
last_digit = scanf("%1d", &n);
printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
{ printf("and is greater than 5\n");
}
else if (last_digit == 0)
{ printf("and is 0");
}
else
{ printf("and is less than 6 and not 0\n");
}
return (0);
}


NOT
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'compare if n is <6,>5 ==0'
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
	int last_digit;
		
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /*compare if last_digit of n is 0, >5  or <6  */
	last_digit= scanf("%0d",&n);        
	printf("Last digit of %d is %d ",n,last_digit);
	if (last_digit > 5)
        {       printf("and is greater than 5\n");
        }
        else if (last_digit== 0)
        {       printf("and is 0");
        }
        else
        {       printf("and is less than 6 and not 0\n");
        }
        return (0);
}

Task 3 : Write a program that prints the alphabet in lowercase, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar twice in your code


Answer

#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'a-z display  '
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
        putchar(a);
        a++;
}
putchar('\n');
return (0);
}

NOT
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'a-z display  '
 * integer n: will be randomly generated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
        {
        putchar(a);
        a++;
        }

return (0);
}

Task 4 : Write a program that prints the alphabet in lowercase, followed by a new line.

    Print all the letters except q and e
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar twice in your code

