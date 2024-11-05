#include "main.h"
#include <stddef.h>

/**
 * _strspn - search for matching char in the intial word
 * and return the number matched
 *
 * @s : string pointer s where intial matching word is stored
 * @accept : char containing chars to be matched
 *
 * Return: int of the number of matched character
 *
 */

unsigned int _strspn(char *s, char *accept)

{	unsigned int counter = 0;
	/* counter for matched characters */
	unsigned int counter_ref = 0;
	/*counter for reference is *s == *accept is achieved */

	char *begin_accept = accept;
	/* *accept pointer is only -> one direction thus store begin location */

	while (*s != '\0') /* current *s not equal 0 or '\0' */
	{
		counter_ref = counter;
		/* stored the matched char counter for reference */

		accept = begin_accept; /* reset *accept address to [0] */

		while (*accept != '\0') /* accept is not end of line */
		{
			if (*s == *accept) /* current *s matches current *accept */
			{
			counter++; /* increase counter value */
			}

			accept++; /* increase *accept address pointer by 1 */
		}

		if (counter == counter_ref) /* no change in counter meant no match */
		{
			return (counter); /* terminate and return the matched counter */
		}

		s++; /* increase *s address pointer by 1 */
	}


	return (counter);
	/* return counter */
}
