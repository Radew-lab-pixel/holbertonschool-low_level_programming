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

	length = _strlen(s) - 1;
/* length of s , -1 to exclude '\0', if not will not update the changes of s */

	back_count = length;
	for (count = 0; count <= (length / 2); count++)

/* count to start before '\0' thus length - 1, if using count < (length/2)*/
/* will cause issue with word count in  assessment */
	{
		/** _putchar(s[count]); */
		swap_char (s + count, s + back_count);
		back_count--;
	}
	*(s + length + 1) = '\0'; /* add '\0' to end of s */
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
