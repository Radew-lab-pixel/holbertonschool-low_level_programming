##Week 4 C  - Pointers, arrays and strings

#Task 0 
'''
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

    Prototype: void reset_to_98(int *n);
'''
#Answer
'''
#include "main.h"

/**
 * reset_to_98 -   updates the pointer value it points to to 98
 * @n  : integer pointer n
 *
 * Return: none
 *
 * Example : reset_to_98(20)
 */

void reset_to_98(int *n)
{
        *n = 98;
}
'''

#Task 1 
'''
Write a function that swaps the values of two integers.

    Prototype: void swap_int(int *a, int *b);
'''

#Answer 
'''
#include "main.h"

/**
 * swap_int - swap the pointer values
 * @a : integer pointer a
 * @b : integer pointer b
 * Return: none
 *
 * Example : swap_none(20, 10)
 */

void swap_int(int *a, int *b)

{
        int c = *a;

        *a = *b;
        *b = c;
}
'''
#Task 2 : 
'''
Write a function that returns the length of a string.

    Prototype: int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
'''

#Answer 
'''
#include "main.h"

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 3  
'''
Write a function that prints a string, followed by a new line, to stdout.

    Prototype: void _puts(char *str);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.
'''
#Answer 
'''
#include "main.h"

/**
 * _puts - display string by input
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts("Hello World")
 */

void _puts(char *str)
{
        int length, count;

        length = _strlen(str);

        for (count = 0; count < length; count++)
        {
                _putchar(str[count]);
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 4
'''
Write a function that prints a string, in reverse, followed by a new line.

    Prototype: void print_rev(char *s);
'''
#Answer 
''' 
#include "main.h"

/**
 * print_rev  - display and reverse  string by input
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : _print_rev("Hello World")
 */

void print_rev(char *s)
{
        int length, count;

        length = _strlen(s); /* length of s */

        for (count = length - 1; count >= 0; count--) /* count to start before '\0' thus length - 1 */
        {
                _putchar(s[count]);
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 5 
'''
Write a function that reverses a string.

    Prototype: void rev_string(char *s);
'''
#Answer 
'''
#include "main.h"

void print_rev_string(char *s);
void swap_char (char *a, char *b);

/**
 * rev_string  - display and reverse  string by input
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : rev_string("Hello World")
 */

void rev_string(char *s)
{
        print_rev_string(s);
}

/**
 * print_rev_string  -  display and reverse  string by input
 * modified from Task 4 - print_rev
 * @s  : string pointer s
 *
 * Return: none
 *
 * Example : _print_rev("Hello World")
 */

void print_rev_string(char *s)
{
        int length, count, back_count;

        length = _strlen(s) - 1; /* length of s , -1 to exclude '\0', if not will not update the changes of s */

        back_count = length;
        for (count = 0; count <= (length / 2); count++) /* count to start before '\0' thus length - 1 , if using count < (length/2) will cause issue with word count in assessment*/
        {
                /** _putchar(s[count]); **/
                swap_char (s + count, s + back_count);
                back_count--;
        }
        *(s + length + 1) = '\0'; /* add '\0' to end of s */ 
        /** _putchar('\n'); **/
}
/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

/**
 * swap_char - swap the pointer values
 * modified from Task 1 - swap_int
 * @a : char pointer a
 * @b : char pointer b
 * Return: none
 *
 * Example : swap_char('A', 'z')
 */

void swap_char (char *a, char *b)
{
        char c = *a;

        *a = *b;
        *b = c;
}
'''

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

    Prototype: void puts2(char *str);
'''
#Task 6 
'''
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

    Prototype: void puts2(char *str);
'''
#Answer 
'''
#include "main.h"

void _puts_2x(char *str);

/**
 * puts2 - display every other character of a string, starting with the first character
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts2("123456789")
 */

void puts2(char *str)
{
        _puts_2x(str);
}

/**
 * _puts_2x - every second vhar in  string by input
 * Function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts_2x("123456789") -> 13579
 */
void _puts_2x(char *str)
{
        int length, count;

        length = _strlen(str);

        for (count = 0; count < length; (count = count + 2))
        {
                _putchar(str[count]);
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''
#Task 7 
'''
Write a function that prints half of a string, followed by a new line.

    Prototype: void puts_half(char *str);
    The function should print the second half of the string
    If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
'''

#Answer 
'''
#include "main.h"

void _puts_halve(char *str);
/**
 * puts_half - display second half of string
 * @str : string pointer str
 *
 * Return : none
 *
 * Example : puts_halfway("Hello World")
 */

void puts_half(char *str)
{
        _puts_halve(str);
}
/**
 * _puts_halve - display string by input
 * function modified from Task 3 3-puts.c
 * @str  : string pointer str
 *
 * Return: none
 *
 * Example : _puts("Hello World")
 */

void _puts_halve(char *str)
{
        int count, half_whole, count_offset, half_remain;

        int length = _strlen(str);

        half_whole = length / 2; /*whole number of length /2 */
        half_remain = length % 2; /* remain of number of length /2 */

        if (half_remain != 0)
        /* the length is not in multipled of 2 - not perfect half */
        {
                count_offset = 1; /* count 1 address later */
        }
        else
        {
                count_offset = 0; /* keep original address */
        }

        for (count = count_offset; count <= half_whole; count++)
        {
                if ((str[count + half_whole]) != '\0')
                {
                        _putchar(str[count + half_whole]);
                        /*start from second half of str */
                }
        }
        _putchar('\n');
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 8 
'''
Write a function that prints n elements of an array of integers, followed by a new line.

    Prototype: void print_array(int *a, int n);
    where n is the number of elements of the array to be printed
    Numbers must be separated by comma, followed by a space
    The numbers should be displayed in the same order as they are stored in the array
    You are allowed to use printf
'''
#Answer
'''
#include "main.h"
#include <stdio.h>

/**
 * print_array - display array by input n
 * @a  : string pointer str
 * @n : integer n for number of array
 *
 * Return: none
 *
 * Example : print_array("Hello World", 5)
 */

void print_array(int *a, int n)
{
        int count;

        count = 0;

        while (count < n)
        {
                if (count == (n - 1))
                {
                        printf("%d", *(a + count));
                }
                else
                {
                        printf("%d, ", *(a + count));
                }
                count++;
        }
        printf("\n");
}

'''
#Task 9 
'''

    Prototype: char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

    Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
'''
#Answer 
'''
#include "main.h"

/**
* *_strcpy - copy both arrays
* @dest  : string pointer dest, to be copied from src
* @src : str point array src
*
* Return: Always @dest (Success)
*
*/

char *_strcpy(char *dest, char *src)
{
        int count, length;

        length = _strlen(src);

        /** char *start = dest; **/

        count = 0;

        while (count < length)
        {
                *(dest + count) = *(src + count);
                count++;
        }

        *(dest + count) = '\0';
        return (dest);
}

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''
#Task 10 
'''
Write a function that convert a string to an integer.

    Prototype: int _atoi(char *s);
    The number in the string can be preceded by an infinite number of characters
    You need to take into account all the - and + signs before the number
    If there are no numbers in the string, the function must return 0
    You are not allowed to use long
    You are not allowed to declare new variables of “type” array
    You are not allowed to hard-code special values
    We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
'''

#Answer 
'''

#include "main.h"

/*char *_strcompareInt(char *dest, char *src);*/
int char2int(char *str);

/**
*_atoi - extract integer from input s
*
* @s : str point array input s
*
* Return: int integer value (Success)
*
*/

int _atoi(char *s)
{
        int result;

        /*_strcompareInt(result, s);*/
        result = char2int(s);

        return (result);
}


/**
* *char2int - compare stc and convert from char array to integer
*  @str : str point array
*
* Return: Integer result (Success)
*
*/
int char2int (char *str)
{
        unsigned int result = 0; /* result of char to integer coversion */
        int sign = 1;  /* to indicate if - or +* default to +*/
        int count = 0; /* counter for accessing the array */
        int length = _strlen(str);
        int num_become_char = 0;
        /*flag to detect when the access the string next char */
        /*after number is non numerical thus will ignore the rest of the string */

        /* for (count = 0; str[count] != '\0' ; count++) */
        for (count = 0; count < length; count++)
        {
                if (num_become_char == 0)
                        /* if the num_become_char is still false 0 */
                {
                        if (str[count] == '-')
                        /* if str[count] is negative sign */
                        {
                                sign = -1 * sign; /* multiply current sign factor by -1 */
                        }
                        else if ((str[count] >= '0') && (str[count]  <= '9'))
                                /* if str between 0 and 9 , converted to integer */
                        {
                                result = result * 10 + (str[count] - '0');
/* multiple each numerical by 10 if more digit found */
/* -'0' is char  to integer */
                        }
                        else /*other character including + sign */
                        {
                                if ((str[count - 1] >= '0') && (str[count - 1] <= '9'))
                                /* found the previous str[count] is numerical */
                                {
                                        num_become_char = 1;
                                        /* set the num_become_char flag to be 1 thus will exit the loop*/
                                }
                        }
                }
                else
                {
                        result = result * sign; /* multiply result with sign */
                        return (result); /* return result and terminate the program */
                }
        }
        result = result * sign; /* multiply result with sign */
        return (result); /* return result */
}

/**
 * _strlen - check the length of string
 * @s  : integer pointer s
 *
 * Return: integer value of length of *s
 * * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
} 
'''

##Week 5 C - More pointers, arrays and strings

#Task 0 : 
'''

Write a function that concatenates two strings.

    Prototype: char *_strcat(char *dest, char *src);
    This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
    Returns a pointer to the resulting string dest

FYI: The standard library provides a similar function: strcat. Run man strcat to learn mor
'''

#Answer 
'''
#include "main.h"

/**
 * _strcat - append src to dest
 * @src  : string pointer str
 * @dest : string pointer dest
 *
 * Return: dest ( successful )
 *
 */

char *_strcat(char *dest, char *src)
{
        int length_dest, length_src, count;

        length_src = _strlen(src); /* obtain of length of src */
        length_dest = _strlen(dest); /* obtain length of dest */

        for (count = 0; count < length_src; count++)
        {
                dest[length_dest + count] = src[count];
        }
        return (dest);
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 1 
'''
Write a function that concatenates two strings.

    Prototype: char *_strncat(char *dest, char *src, int n);
    The _strncat function is similar to the _strcat function, except that
        it will use at most n bytes from src; and
        src does not need to be null-terminated if it contains n or more bytes
    Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.
'''

#Answer
'''
#include "main.h"

/**
 * _strncat - append src to dest depend on n
 * @src  : string pointer str
 * @dest : string pointer dest
 * @n : integer n
 *
 * if n is larger the src[count],
 * src[count] will be used
 * Return: dest ( successful )
 *
 */

char *_strncat(char *dest, char *src, int n)
{
        int length_dest, length_src, count;

        length_src = _strlen(src); /* obtain of length of src */
        length_dest = _strlen(dest); /* obtain length of dest */
        if (n > length_src) /* if n larger than length_src */
        { /* append src to dest */
                for (count = 0; count < length_src; count++)
                {
                        dest[length_dest + count] = src[count];
                }
        }
        else /* n < length_Src */
        {
                /* append src[n] to dest */
                for (count = 0; count < n; count++)
                {
                        dest[length_dest + count] = src[count];
                }
        }
        return (dest);
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
} 
'''

#Task 2 : 
'''
Write a function that copies a string.

    Prototype: char *_strncpy(char *dest, char *src, int n);
    Your function should work exactly like strncpy

FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.
'''
#Answer 
'''
#include "main.h"

/**
 * _strncpy - copy src to dest depend on n
 * @src  : string pointer str
 * @dest : string pointer dest
 * @n : integer n
 *
 * if n is larger the src[count],
 * remainder dest[count] will be filled with '\0'
 * Return: dest ( successful )
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
        int length_src, count;

        length_src = _strlen(src); /* obtain of length of src */
        /*length_dest = _strlen(dest);*/  /* obtain length of dest */
        if (n > length_src) /* if n larger than length_src */
        { /* copy src to dest */
                for (count = 0; count < length_src; count++)
                {
                        dest[count] = src[count];
                }
                /* Add '\0' to remaining dest[n] */
                while (count < n)
                {
                        dest[count] = '\0';
                        count++;
                }
        }
        else /* n < length_Src */
        {
                /* copy only  src[n] to dest */
                for (count = 0; count < n; count++)
                {
                        dest[count] = src[count];
                }
        }
        return (dest);
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
'''

#Task 3 : 

'''
Write a function that compares two strings.

    Prototype: int _strcmp(char *s1, char *s2);
    Your function should work exactly like strcmp

FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.
'''

#Answer
'''
#include "main.h"

int _charCal(char a, char b);

/**
 * _strcmp - compare s1  and s2
 * @s1  : string pointer s1
 * @s2 : string pointer s2
 *
 * Return: 0 ( successful )
 * > 0 if s1 > s2
 * < 0 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
        int length_s1, length_s2, length, count;
        int result;

        length_s1 = _strlen(s1); /* obtain of length of src */
        length_s2 = _strlen(s2); /* obtain length of dest */

        /* match_detected = 0,  flag to detect if match */

        /* detect if the both length not matching to prevent overflow */

        if (length_s1 >= length_s2)
        {
                length = length_s2; /* assign length_s2 to length */
        }
        else
        {
                length = length_s1; /* assign length_s1 to length */
        }

        /* count from 0 to length */

        for (count = 0; count < length; count++)
        {

                result = _charCal(s1[count], s2[count]);
                /* called in house charCal function */

                /* result != 0 ( mismatch) */
                if (result != 0)
                {
                        return (result); /* exit early and return result */
                }
        }
        return (result); /* reach end of length , return result ( mostly 0 )*/
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

/**
 *  _charCal - integer difference between s1 and s2
 * Description:  integer difference between s1 and s2
 * return the difference
 *
 * @a : string pointer to s1
 * @b : string pointer to s2
 *
 * Return: 0 ( successful )
 * else difference value
 *
 * Example : _charCal(s1, s2)
*/


int _charCal(char a, char b)
{
        int int_a, int_b;

        int_a = a - '0';
        /*convert s1 (ASCII char) to integer*/
        int_b = b - '0';

        /* a and b matched */
        if (int_a == int_b)
        {
                return (0);
        }
        else
        {
                return (int_a - int_b);
        }
} 
'''
#Task 4 : 
'''
Write a function that reverses the content of an array of integers.

    Prototype: void reverse_array(int *a, int n);
    Where n is the number of elements of the array
'''

#Answer 
'''
#include "main.h"

int _intlen(int *s);

/**
 * reverse_array - reverse array according to interger n
 * @a  : string pointer to array a
 * @n : integer n size of the array to be swapped
 *
 * Return: void ( successful )
 *
 */

void reverse_array(int *a, int n)
{
        int temp, count, midway;

        /*length = _intlen(a); */
        /* obtain of array length of a */
        /* int temp[n]; */
        /* temporary storage of a between [0..length] NOT allowed */

         /* failsafe check for n > 1 to prevent segmentation fault code 139  */
        if (n > 1)
        {

                midway = n / 2; /* count for for loop to end midway of n */
                /* between 0 and n /2 - midway */

                for (count = 0; count <= midway; count++)
                {
                        /* perform swap */
                        temp = a[count];
                        a[count] = a[n - 1 - count];
                        a[n - 1 - count] = temp;
                        /* a[count] = temp[n - count]; */
                        /* copy for end of temp to start of a  NOT allowed*/
                }
        }

}
'''

#Task 5 
'''
Write a function that changes all lowercase letters of a string to uppercase.

    Prototype: char *string_toupper(char *);
'''
#Answer 
'''
#include "main.h"

char _charToUpper(char a);

/**
 * string_toupper - lowercse to uppercase
 * @s  : string pointer s
 *
 * Return: string s
 */

char *string_toupper(char *s)
{
        int length, count;
        /* char result; */

        length = _strlen(s); /* obtain of length of s */

        /* count from 0 to length */

        for (count = 0; count < length; count++)
        {
                s[count] = _charToUpper(s[count]);
        }
        return (s); /* return result */
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s  : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

/**
 *  _charToUpper - convert lowercase char to uppercase
 * Description:  convert lowercase to uppercase
 * return uppercase value
 *
 * @a : char a
 *
 * Return: b as uppercase
 *
 * Example : _charToUpper(a)
*/


char _charToUpper(char a)
{
        char b;

        /*a between 'a' and 'z' */
        if ((a >= 'a') && (a <= 'z'))
        {
                b = a - 32; /* convert a to uppercase (32 different) */
        }
        else
        {
                b = a; /* save a to be as a is uppercase */
        }
        return (b);
}
'''

#Task 6 
'''
Write a function that capitalizes all words of a string.

    Prototype: char *cap_string(char *);
    Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
'''
#Answer 
''' 

#include "main.h"

char _charToUpper(char a);
int _isSeperator(char a);

/**
 * cap_string - lowercase to uppercase depending on seperator
 * @s  : string pointer s
 *
 * Return: string s
 */

char *cap_string(char *s)
{
        int length, count;

        /* char result */

        int sep_detected = 0;

        int next_sep_detected = 0;

        length = _strlen(s);

        /* obtain of length of s */

        /* count from 0 to length */
        s[0] = _charToUpper(s[0]); /* first array to capital */

        count = 1;

        while (count <= length)
        {
                /* detect current char if seperator */
                sep_detected = _isSeperator(s[count]);

                /*s[count] = ' ';*/
                        /* replace current with space */
                /* jump to next array */
                next_sep_detected = _isSeperator(s[count + 1]);

                /** check current is but next array is not seperator */
                if ((sep_detected == 1) && (next_sep_detected == 0))
                {
                /* confirmed next array is not seperator */

                        s[count + 1] = _charToUpper(s[count + 1]);
                        sep_detected = 0; /* reset the flag */
                        count++;
                }
                count++;
        }
        return (s); /* return result */
}

/**
 * _strlen - check the length of string
 * function declaration performed in main.h
 * @s : char pointer s
 *
 * Return: integer value of length of *s
 *
 * Example : _strlen(aa)
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

/**
 *  _charToUpper - convert lowercase char to uppercase
 * Description:  convert lowercase to uppercase
 * return uppercase value
 *
 * @a : char a
 *
 * Return: b as uppercase
 *
 * Example : _charToUpper(a)
*/


char _charToUpper(char a)
{
        char b;

        /*a between 'a' and 'z' */
        if ((a >= 'a') && (a <= 'z'))
        {
                b = a - 32; /* convert a to uppercase (32 different) */
        }
        else
        {
                b = a; /* save a to be as a is uppercase */
        }
        return (b);
}

/**
 * _isSeperator - find it current input is a seperator
 * Decription : find seperator
 * @a : char a
 *
 * Return: 1 if seperator found
 * else 0
 * Seperator : space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }
 */

int _isSeperator(char a)
{
        int result;

        switch (a)
        {
                case ' ':
                        result = 1;
                        break;

                case '\t':
                        result = 1;
                        break;

                case '\n':
                        result = 1;
                        break;

                case ',':
                        result = 1;
                        break;

                case ';':
                        result = 1;
                        break;

                case '.':
                        result = 1;
                        break;

                case '!':
                        result = 1;
                        break;

                case '"':
                        result = 1;
                        break;

                case '(':
                        result = 1;
                        break;

                case ')':
                        result = 1;
                        break;

                case '{':
                        result = 1;
                        break;

                case '}':
                        result = 1;
                        break;

                default:
                        result = 0; /* no seperator */
        }
        return (result);
}
'''

#Task 7 
'''

Write a function that encodes a string into 1337.

    Letters a and A should be replaced by 4
    Letters e and E should be replaced by 3
    Letters o and O should be replaced by 0
    Letters t and T should be replaced by 7
    Letters l and L should be replaced by 1
    Prototype: char *leet(char *);
    You can only use one if in your code
    You can only use two loops in your code
    You are not allowed to use switch
    You are not allowed to use any ternary operatio
'''

#Answer 
'''

#include "main.h"

char _charToLeet(char a);

/**
 * leet -  convert string to leet value
 * @s  : string pointer s
 *
 * Return: string s
 */

char *leet(char *s)
{
        int count;
        /* char result; */

        /*length = _strlen(s); */
        /*obtain of length of s */

        /* count from 0 to length */

        /*for (count = 0; count < length; count++)*/
        /*s[0] = _charToLeet(s[0]);*/
        for (count = 0; s[count] != '\0'; count++)
        /*for (count = 0; s[count] != '\n'; count++)*/
        {
                s[count] = _charToLeet(s[count]);
        }
        return (s); /* return result */
}


/**
 *  _charToLeet - convert char to Leet style
 * Description:  convert char to Leet
 * return leet value
 *
 * @a : char a
 *
 * Return: result as converted leet value if leet
 * else return a
 *
 * Example : _charToLeet(a)
*/

char _charToLeet(char a)
{
        char reference[5] = "aeotl";
        char leet[5] = "43071";
        char result = a;

        int i;

        for (i = 0; i < 5; i++)
        {
                /* match found for leet conversion */
                if ((a == reference[i]) || (a == (reference[i] - 32)))
                {
                        result = leet[i];
                        return (result); /*return leet value*/
                }
        }
        return (result); /* return a (unchanged */
}
'''
