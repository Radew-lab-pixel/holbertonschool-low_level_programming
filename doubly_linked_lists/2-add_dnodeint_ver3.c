#include "lists.h"

int _strlen(char *s);

/**
 * add_dnodeint - function that adds a new node at the beginning of list
 *
 * @head : list input
 * @n : variable integer inpit
 * Return: address of new element (node)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp; /*local temp pointing to *head */

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*if (temp == NULL)*/
	/**
	*if (*head == NULL)
	*{
	*	free(new_node);
	*	return (NULL);
	*}
	*/
	
	temp = *head;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = temp;
	
	temp->prev = new_node;
	*head = new_node;
	/*temp->prev = new_node;   segentation error */

	/*new_node->n = n; */
	/*new_node->prev = NULL;*/

	/*new_node->next = *head;*/
	/*new_node->next = temp;*/
	/*temp->prev = new_node;*/
	/* temp = new_node; */
	/*temp->prev = new_node; */
	/*head.prev = new_node;*/

	/*temp = new_node; */
	/* *head = temp; */

	return (new_node);
}
