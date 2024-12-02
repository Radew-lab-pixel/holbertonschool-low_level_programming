#include "lists.h"
#include <string.h>

int _strlen(const char *s);


/**
 * add_node - add a new node at the beginning of list
 *
 * @head : first node of linked list
 * @str : string to be written
 * Return: the new node address or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0; /* length of str */

	/*list_t *hcopy = (list_t *)malloc(sizeof(list_t));*/

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* *hcopy = **head; a copy of list_t **head */

	new_node->str = strdup(str); /* copy str to new_node->str */
	length = _strlen(str);
	new_node->len = length;
	/*new_node->next = hcopy;*/
	new_node->next = *head; /* new_node now point to *head */

	*head = new_node; /* first node which is head now point to new_node */
	/*free(hcopy);*/

	return (new_node);

}
/**
 * _strlen - return the length of the string
 *
 * @s : input string
 * Return: length of s
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);

}
