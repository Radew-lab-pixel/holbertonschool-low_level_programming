#include "main.h"

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

/** Week 3 : Task 5 
int main(void)

{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

*/

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

/* Week 5 : Task 5 
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
*/

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    
    t = _strstr("First, solve the problem. Then, write the code.", "");
      printf("%s\n", t);
    return (0);
}
