#include "main.h"
#include <unistd.h>

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
	char *end = s; /* end pointer points to first character of s */
	char *start = s; /* start pointer points to first character of s*/
	char temp; /* temp char storage for swapping */
	
	if ((s == NULL) || (*end = '\0')) /* if no string in s or end pointer is pointed to end of s , terminate */
	{
		return;
	}
	while (*end != '\0') /*fill end pointer with s value till end of line */
	{
		end++;
	}
	end--; /* move back from end of line character */

	while (start < end) /*  Is address of start is larger than end */
	{
		temp = *start; /*swap start and end */
		*start = *end;
		*end = temp ;

		start++; /* move start to next adress */
		end--; /* move end backward to next address */
	}
}
