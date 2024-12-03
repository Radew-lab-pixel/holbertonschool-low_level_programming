#include "lists.h"

/**
 * free_dlistint - function to free memory of dlistint list
 *
 * @head : list reference
 * Return: void always
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (temp->next != NULL)
	{
		temp = head->next; /*point to head->next */
		/*free(head->next); */
		/*free(head->prev); */
		free(head); /* free current head pointer */
		head = temp; /* reassign head to point to temp */
	}
	/* free the last node of the list */
	/* free ->next and prev will caused segmentation or core dump error */
	/*free(head->next);*/
	/*free(head->prev);*/
	free(head);
	/*return; removed due to betty*/
}
