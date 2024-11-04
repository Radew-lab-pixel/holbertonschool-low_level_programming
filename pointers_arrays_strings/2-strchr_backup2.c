#include "main.h"

/**
 * _strchr - search for char c in string
 * and remove all characteres prior char c and
 * keep the rest after
 * @s  : string pointer s
 * @c : string pointer c to llo for
 *
 * Return: dest ( successful )
 *
 */

char *_strchr(char *s, char c)
{
	int count = 0;
	int found_count = 0;

	int char_found = 0;
	int length;


	/* remove as cause Segmentation fault (core dumped) error */
	length = _strlen(s);  /* obtain of length of src */
	/* obtain length of dest */


		/* s[count] not '\0' and char_found is 0 */
		while ((s[count] != '\0') && (char_found == 0)) 
		{
			if (s[count] == c)
			{
				found_count = count; /* store count counter of the char c */
				char_found = 1;  /* set found the char c in s flag to 1*/
			}
			
			count++;
		}

		count = 0;
		
		char *temp;	

		/* reset count counter */

		if (char_found == 1) /* char_found is 1 ( found char c ) */
		{
			/* count less than number of arrays to be copied */
			while (count <= (length - found_count))
			{
				temp[count] = s[found_count + count];
				count++;
			}
			temp[count] = '\0';
		
			s= temp;
		return (temp);
		}

		/**
		if (char_found == 1)
		{	
			s[found_count] ='\0';
			return (s);
		}

		else 
		{
			return (s='\0');
		}**/
	

	return ('\0');
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
