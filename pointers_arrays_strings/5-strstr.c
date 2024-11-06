#include "main.h"

/**
 * _strstr - find needle  in haystack
 * @haystack  : string pointer search target
 * @needle : string pointer  to be based on
 *
 * Return : char of matched word
 */

char *_strstr(char *haystack, char *needle)
{
	int count;
	int match = 0;
	/* match flag if haystack and needle matches */

	int length = _strlen(needle);

	/* length of needle */

	if (length == 0)

	/* failsafe if length is 0 */
	{
		return (haystack);
		/* return haystack and exit */
	}
	while (*haystack != '\0')
	{	count = 0; /* reset count to 0 */
		if (haystack[count] == needle[count]) /* first match found ! */
		{
			match = 1;
			/* match found with first character of needle and among s array */
			count = 1;
			/* forward count by 1 */

			/* count < needle length & match found */
			while ((count < length) && (match == 1))
			{
				if (haystack[count] == needle[count])
				{
					count++;
			/* increase both haystack and needle array position by 1 */
					match = /1; 
			/* reaffirm match is found */
				}
				else	 /* there a mismatch along the search */
				{
					match = 0; /* match reset to 0 */
				}
			}

		/* count and length the same while  match also is 1 */
		/* entire needle string matches a word in haystack */
			if ((count == length) & (match == 1))
			{
				return (haystack);
			}
		}
		haystack++;
		/* progress to next char in haystack */
	}
	if (*haystack == '\0')
		/* reach end of line of haystack */
	{
		return (0); /* return 0 - NULL */
	}
	return (haystack);
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
