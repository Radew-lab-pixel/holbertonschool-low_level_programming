#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node_end -  adds a new node at the end of linked list
 *
 * @head : current linked list
 * @str : string to be added to new node
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;

	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	/*list_t *head_copy = (list_t *)malloc(sizeof(list_t)); */
	list_t *temp;

	/*temp = *head;  copy of **head */

	if (new_node == NULL)
	{
		return (NULL);
	}

	/*  *head_copy = **head;  backup copy */

	length = _strlen(str);
	new_node->len = length;
	new_node->str = strdup(str); /*copy str to new_node->str */
	new_node->next = NULL;
	/* for debugging */
	/*printf("LEngth : %u String : %s\n",new_node->len, new_node->str);*/


	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		/**
		* if (head == NULL)
		*{
		*	new_node->next = NULL;
		*	*head = new_node;
		*}
		*else
		*{
	*/
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
			/* for debugging */
			/*printf("last note :found \n");*/
			temp->next = new_node;
	}
	return (temp);
}

/**
 * _strlen - custom function to find length of string
 *
 * @s : the string input
 * Return: the length of string
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
