#include "main.h"

int _strlen(char *s);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);

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

	int length = _strlen(str); /* length of str */

	char *dest = (char*) malloc (length * sizeof(char));

		
	while (*str != '\0')
	{
		printf("%c",*str);
		str++;
	}


	/*duplicate = (char *) malloc(size * sizeof(char)); */
	/*+1 for '\0' character */



	/*size = sizeof(str); */

	/*printf("size : %d",size);
	
	if (size <= 0)
	{
		return (NULL);
	}
	*/

	if (str == NULL)
	{	
		return (NULL);
	}
	

	count  = 0;	
	while (count < length)
		{
			dest[count] = str[count];
			count++;
		}

	free(str);	
	return (str);
	
}

/**
 * create_array - main entry
 *
 * Description: create an array and intialise the content with c
 *
 * @size : size of the array
 * @c : char c that is content
 * Return: NULL (invalid) or a  array
 */


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
