#include "lists.h"

/**
 * dlistint_t *insert_dnodeint_at_index - function to add new node at give position
 * @h : lists
 * @idx : position of the new node
 * @n : value of the new note
 *
 * Return: address of new node else NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;

	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp; /* local pointer to **h */
	dlistint_t *prev_temp; /* pointer to previous address of temp */

	/** check new_node malloc if successful*/	
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	temp = *h; /* pointer to *h */

	while ((temp->next != NULL) && (count < idx))
	{
		prev_temp = temp;
		temp = temp->next;
		count++;
	}
	if (count > idx)
	{
		return (NULL);
	}	
	temp->next = new_node;
	new_node->prev = prev_temp; /* new_node->prev points to prev_temp */
	/** go to next address of temp */
	temp = temp->next;
	temp->prev = new_node; /* next address of temp->prev now point to new_node */
	new_node->next = temp;

	return (new_node);

}
