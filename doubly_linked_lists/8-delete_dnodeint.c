#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 *
 * @head : lists
 * @index : location of node to be removed
 *
 * Return: 1 (successful) or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *prev_temp;
	unsigned int count = 0;

	temp = *head;
	while ((count < index) && (temp->next != NULL))
	{
		prev_temp = temp; 
		temp = temp->next;
		count++;
	}



