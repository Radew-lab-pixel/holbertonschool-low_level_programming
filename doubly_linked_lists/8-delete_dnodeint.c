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
	dlistint_t *next_temp;
	unsigned int count = 0;

	temp = *head;
	while ((count < index) && (temp->next != NULL))
	{
		prev_temp = temp;
		temp = temp->next;
		count++;
	}
	if (count == index) /* found index */
	{
		if (temp->next != NULL) /* not the last node */
		{
			next_temp = temp->next;
			next_temp->prev = prev_temp;
			prev_temp->next = next_temp;
		}
		else /* temp is last node */
		{
			prev_temp->next = NULL;			
		}
		temp = NULL;
		free(temp);
		return (1);
	}
	return (1);
}
