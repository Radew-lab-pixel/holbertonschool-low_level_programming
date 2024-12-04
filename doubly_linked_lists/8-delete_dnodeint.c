#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at certain index
 *
 * @head : list of nodes
 * @index : index of the node to be deleted
 * Return: 1 if successful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *prev_temp;
	dlistint_t *post_temp;
	unsigned int count = 0;

	if (*head == NULL) /* added for checker */
	{
		free(*head);
		return (-1);
	}

	temp = *head; /* temp point to *head */
	if (index == 0)  /* node to be deleted at start */
	{
		if (temp->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL; /* instead of free(temp) or free(*head)*/
		free(temp); /*added for valgrind */
		return (1);
	}
	while ((count < index) && (temp != NULL))
	{
		if (temp->next == NULL)
			return (-1); /* index is larger the actual no. of nodes */
		prev_temp = temp; /* prev_temp to point to current temp */
		temp = temp->next; /* temp point to next address */
		count++;
	}
	if (index > count) /* index required is greater than no, of nodes */
		return (-1);
	post_temp = temp->next; /* go next address after temp */
	post_temp->prev = prev_temp; /* post_temp->prev ppint to prev_temp*/
	prev_temp->next = post_temp; /* prev_temp-> next point to post_temp */
	free(temp);
	return (1); /*successful*/
}
