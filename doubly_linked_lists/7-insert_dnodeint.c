#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - insert a new node
 * @h : lists
 * @idx : position of the new node
 * @n : value of the new note
 * Return: address of new node else NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	unsigned int count = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp; /* local pointer to **h */
	dlistint_t *prev_temp; /* pointer to previous address of temp */

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((*h == NULL) || (idx == 0)) /*if (*h == NULL)  h is not there **/
	{
		new_node = add_dnodeint(h, n); /* add_dnodeint has *h ==NULl detection */
		return (new_node);
	}
	temp = *h; /* pointer to *h */
	if ((temp->next == NULL) && (temp->prev == NULL) && (idx > 0))
	{/* checker: Insert a element in a list of 1 element out of range */
		return (NULL);
	}
	while (count < idx)
	{
		if (temp->next == NULL) /* last node in list */
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else
		{
			prev_temp = temp;
			temp = temp->next;
			count++;
		}
	}
	if (count > idx)
	{
		return (NULL);
	}
	prev_temp->next = new_node; /* prev_temp pointing */
	new_node->prev = prev_temp;
	temp->prev = new_node;	/*temp pointing */
	new_node->next = temp;
	return (new_node);
}
