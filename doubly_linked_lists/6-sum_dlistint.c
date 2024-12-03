#include "lists.h"

/**
 * sum_dlistint - function to sum of data
 *
 * @head : list
 * Return: integer sum valie
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /* local pointer to head */
	int sum = 0;
	
	if (head == NULL)
	{
		return (0);
	}
	temp = head;

	/**
	*if (temp->next == NULL)
	*{
	*	sum += temp->n;
	*	return (sum);
	*}
	*/
	while (temp->next != NULL)
	{
		sum += temp->n; /* add current n in temp to sum */
		temp = temp->next; /* next pointer */
	}
	if (temp->next == NULL) /* last node or only 1 node exists */
	{
		sum += temp->n;
	}
	return (sum);
}
