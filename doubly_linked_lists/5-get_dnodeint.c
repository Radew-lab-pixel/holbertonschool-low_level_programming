#include "lists.h"

/**
 * get_dnodeint_at_index - function to return certain node of the list
 *
 * @head : the list
 * @index : the index of the node required
 * Return: node required
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp; /* local pointer to head */
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while ((temp->next != NULL) && (count < index))
	{
		temp = temp->next;
		count++;
	}
	if (count < index) /* count < index) */
	{
		return (NULL);
	}
	return (temp);
}
