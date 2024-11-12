#include <stdlib.h>
#include "main.h"

/**
 * string_noncat -  concatenates two strings
 * Description : concatenates two strings s1, s2
 * if s2 < n , use length of s2
 * @s1 : char array s1 - final result 
 * @s2 : char array s2
 * @n : unsigned integer n which limit the length of s2
 * Return : s1 (Successful) else NULL 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp1 = s1;
	char *temp2 = s2;
	char *dest;
	int size1, size2;
	int count = 0;

	if (s1 == NULL)
	{	
		temp1 = "";
	}
	if (s2 == NULL)
	{
		temp2 ="";
	}
	if (n > sizeof(s2))
	{
		size2 = sizeof(s2);
	}
	else
	{
		size2 = n;
	}
	size1 = sizeof(s1) - 1; /* remove '\0' in s1 */
	dest = (char *) malloc(size1 + size2 + 1);
	if (dest == NULL)
	{	
		free(dest);
		return (NULL);
	}
	else 
	{
		/* copy s1 to dest */
		for (count = 0; count < size1; count++)
		{
			dest[count] = temp1[count];
		}
		for (count = 0; count < size2; count++)
		{
			dest[size1 + count] = temp2[count];
		}
		dest[size1 + count] = '\0'; 
	       	/* add end of line */
		if (dest == NULL)
		{
			free(dest);
			return (NULL);
		}
		else
		{
			return (dest);
		}
	}
}
