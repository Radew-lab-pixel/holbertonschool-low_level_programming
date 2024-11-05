#include "main.h"
#include <stddef.h>

/**
 * _strspn - search for char and return the number
 *
 * @s : string pointer s
 * @accept : char containing chars to be matched
 *
 * Return: int of the number of matched character
 *
 */

unsigned int _strspn(char *s, char *accept)

{	unsigned int counter = 0;
	/* counter for matched characters */

	char *begin_accept = accept;
	/* *accept pointer is only -> one direction thus store begin location */

	while (*s != '\0') /* current *s not equal 0 or '\0' */
	{
		accept = begin_accept;

		while (*accept != '\0') /* accept is not end of line */
		{
			if (*s == *accept) /* current *s matches current *accept */
			{
			counter++; /* increase counter value */
			}
			accept++; /* increase *accept address pointer by 1 */
		}
		s++; /* increase *s address pointer by 1 */
	}


	return (counter);
	/* return counter */
}
