#include "main.h"
#include <stddef.h>

char *_strstr_branch(char *s, char *accept);

/**
 * _strstr - search for matching char in the intial word
 * and return the matched characters (*similar to _strpbrk ?
 *
 * @haystack : string pointer s where intial matching word is stored
 * @needle : char containing chars to be matched
 *
 * Return: matched character
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = _strstr(haystack, needle);
	return (result);
}

/**
 * _strpbrk - search for matching char in the intial word
 * and return the matched characters
 *
 * @s : string pointer s where intial matching word is stored
 * @accept : char containing chars to be matched
 *
 * Return:  matched character
 *
 */

char *_strstr_branch(char *s, char *accept)

{
	/*unsigned int counter = 0; */
	/*counter for matched characters */
	/*counter for reference is *s == *accept is achieved */

	int count = 0; 
	int length = _strlen(accept); /* length of the accept */

	/*char *begin_accept = accept;*/

	int match = 0;
	/* *accept pointer is only -> one direction thus store begin location */

	while (*s != '\0') /* current *s not equal 0 or '\0' */
	{	
		count = 0; /* reset count to 0 */
		if (*(s + count) == *(accept + count))
		{
			match = 1; /* set match flag to 1 */
			
			while ((count < length) && (match == 1))
			{
				if (*(s + count) != *(accept + count))/* s matches accept */
				{
					count++; /*increase count to advance 1 place in s and accept */
					match = 1; /* set match flag to 1 */
				}
				else 
				{
					match = 0; /* reset match flag to 0 */
				}
			
			}
			s = s + count; /* new s array position ,move forward */			
		}
			
		/* match found and count max at length of accept */	
		if ((match == 1) && (count == length))
		{

			return (1);
		}
		s++; /* increase *s address pointer by 1 */
	}

	if (*s == '\0') /* reach end of line of s */
	{
		return (0); /* return 0 - NULL */
	}

	return (s);



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
