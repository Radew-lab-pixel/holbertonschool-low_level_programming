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

	length = _strlen(temp); /* length of str */

	if (length < 1)
	{
		return (NULL);
	}

	dest = (char *) malloc(length * sizeof(char));

/*duplicate = (char *) malloc(size * sizeof(char)); */
/*+1 for '\0' character */
/*size = sizeof(str); */
/*printf("size : %d",size);*/

	if (dest == NULL)
	{	
		/* if (temp == NULL) does not work in old version */
		return (NULL);
	}
	else
	{
		while (count < length)
		{
			dest[count] = temp[count];
			count++;
		}
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
