#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 *
 * Description: concatenates two strings s1, s2
 * if s2 < n , use length of s2
 *
 * @s1 : char array s1 - final result
 * @s2 : char array s2
 * @n : unsigned integer n which limit the length of s2
 * Return: array s1 (Successful) else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp1 = s1;
	char *temp2 = s2;
	char *dest;
	unsigned int size1, size2;
	unsigned int count = 0;

	if (s1 == NULL)
	{
		temp1 = "";
	}
	else
	{
		temp1 = s1;
	}
	if (s2 == NULL)
	{
		temp2 = "";
	}
	else
	{
		/*printf("s2 : %s",s2);*/
		temp2 = s2;
	}
	/*size1 = sizeof(temp1) / sizeof(temp1[0]); */
	/*size2 = sizeof(temp2) / sizeof(temp2[0]); */
	size1 = _strlen(temp1);
	size2 = _strlen(temp2);

	if (n < size2)
	{
		size2 = n;
	}
	dest = (char *) malloc(size1 + size2 + 1);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	else
	{
		/*printf("size of dest  %lu", sizeof(dest));*/
		/* copy s1 to dest */
		for (count = 0; count < size1; count++)
		{
			/* printf("dest [%d] : %s", count, dest[count]); */
			dest[count] = temp1[count];
		}
		for (count = 0; count < size2; count++)
		{
			/*printf ("append dest [%d] : %s", size1 + count, temp2[count]);*/
			dest[size1 + count] = temp2[count];
		}
		dest[size1 + count] = '\0'; /* add end of line */
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


/**
 * _strlen - check the length of string
 *
 * Description: create an array and intialise the content with c
 *
 * @s : size of the array
 * Return: NULL (invalid) or a integer size
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
