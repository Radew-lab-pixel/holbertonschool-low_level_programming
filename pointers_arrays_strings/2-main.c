#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

/** Week 3 : task 2 
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
*/

/** Week 5: Task 2 */ 

/*
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
*/

/** Week 5 2-strchr */

int main(void)
{

   char *s = "hello";
   char *f;

   char *s1 = "First, solve the problem. Then, write the code.";
   /* char *f1; */


   f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    
    f =_strchr(s1, 'a');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    return (0);
}
