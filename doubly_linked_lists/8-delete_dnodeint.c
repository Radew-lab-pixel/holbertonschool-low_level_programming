#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 * @head : lists
 * @index : location of node to be removed
 * Return: 1 (successful) or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev_temp, *next_temp;
	unsigned int count = 0;

	if (*head == NULL) /*head is empty */
	{
		free(temp);
		return (-1);
	}
	if (index == 0) /* node to deleted at the start */
	{
		if (temp->next != NULL) /* temp is not alone */
		{	/* not next_temp = temp->next; next_temp->prev = NULL; */
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else /* only one node left in the list */
			*head = NULL; /*not temp = NULL; free(*head); */
		free(temp);
		return (1);
	}
	while ((count < index) && (temp != NULL)) /* not temp->next != NULL*/
	{
		prev_temp = temp;
		temp = temp->next;
		count++;
	}
	if (count < index) /* out of range */
		return (-1); /*free(prev_temp); remove 2 pass valgrind out range check*/
	if (count == index) /* found index */
	{
		if (temp->next != NULL) /* not the last node */
		{
			next_temp = temp->next;
			next_temp->prev = prev_temp;
			prev_temp->next = next_temp;
		}
		else /* temp is last node */
			prev_temp->next = NULL;	/*temp = NULL;  remove this to pass valgrind*/
	}
	free(temp);
	return (1);
}
