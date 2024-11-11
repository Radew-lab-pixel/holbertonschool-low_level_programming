#include "main.h"

int _strlen(char *s);
char *_strdup(char *str);

/**
 * _strdup - main entry
 *
 * Description: create an array and duplicate it
 *
 * @str : char string array that is to be duplicate
 * Return: NULL (invalid) or a  array
 */

char *_strdup(char *str)
{
	/*int size = _strlen(str); find length of str */
	/*char *duplicate;*/
	/*char *duplicate = malloc(sizeof(char) * (size + 1)); */
	/* int i = 0; */

	int count = 0;
	char *temp = str;

	int length;
	char *dest;
	/* create a temporary temp pointer due to free() in main.c */
	/* else free(): invalid pointer and Aborted (core dumped) */

	/* do a check of str prior to other checks to prevent memory eror */
	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(temp); /* length of str */

	/*printf( "Length : %d ", length);*/
	/*if (length == 0) */
	/* return ('\0'); */

	dest = (char *) malloc((length + 1) * sizeof(char));

/*duplicate = (char *) malloc(size * sizeof(char)); */
/*+1 for '\0' character */
/*size = sizeof(str); */
/*printf("size : %d",size);*/
	if (dest == NULL)
	{	free (dest);
		return (NULL);
	}

	/**if(*temp == '\0') **/

		/* if (temp == NULL) does not work in old version */
	/**	return (NULL); **/

	else
	{
		while (count < length)
		{
			dest[count] = temp[count];
			count++;
		}
		dest[length] = '\0';
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
