#include "main.h"

int _strlen(char *s);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

/**
 * str_concat - main entry
 *
 * Description: concenate both arrays
 *
 * @s1 : char string array
 * @s2 : char string array
 * Return: NULL (invalid) or a  array
 */

char *str_concat(char *s1, char *s2)
{

	int count = 0;
	char *temp1 = s1;
	char *temp2 = s2;

	int length_s1, length_s2, count_s2;
	char *dest;
	/* create a temporary temp pointer temp1 and temp2  due to free() in main.c */
	/* else free(): invalid pointer and Aborted (core dumped) */

	/* do a check of str prior to other checks to prevent memory eror */
	if (s1 == NULL)
	{
		return (temp2);
	}

	if (s2 == NULL)
	{
		return (temp1);
	}

	length_s1 = _strlen(temp1); /* length of s1 */
	length_s2 = _strlen(temp2); /* length of s2 */

	/*printf( "Length : %d %d\n", length_s1, length_s2);*/
	/*if (length == 0) */
	/* return ('\0'); */

	dest = (char *) malloc((length_s1 + length_s2 + 1) * sizeof(char));

/*duplicate = (char *) malloc(size * sizeof(char)); */
/*+1 for '\0' character */
/*size = sizeof(str); */
/*printf("size : %d",size);*/

	/**if(*temp == '\0') **/

		/* if (temp == NULL) does not work in old version */
	/**	return (NULL); **/

	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}

	else
	{

	/* copy s1 to dest */
		while (count < length_s1)
		{
			dest[count] = temp1[count];
			count++;
		}
		/* copy s2 to dest */
		count_s2 = 0;

		while (temp2[count_s2] != '\0')
		{
			dest[count_s2 + count] = temp2[count_s2];
			/*printf(" temp2 : %c", temp2[count_s2]); */
			count_s2++;
		}
		dest[count_s2 + count] = '\0';
		return (dest);
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
