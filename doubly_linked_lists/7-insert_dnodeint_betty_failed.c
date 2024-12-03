#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - function
 * to add new node at give position
 *
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
	/*temp = *h;  pointer to *h */

	/*if (*h == NULL)  h is not there **/
	/* idx is at position 0 (start) and */
	/* add_dnodeint has *h ==NULl detection */
	if ((*h == NULL) || (idx == 0))
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	temp = *h; /* pointer to *h */
	/* checker: Insert a element in a list of 1 element out of range */
	if ((temp->next == NULL) && (temp->prev == NULL) && (idx > 0))
	{
		return (NULL);
	}
	while (count < idx)
	{
		/*if (temp ==  NULL) end of list or NULL */
		if (temp->next == NULL) /* last node in list */
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
			/*return (NULL);*/
		}
		else
		{
			prev_temp = temp;
			temp = temp->next;
			count++;
		}
		/* added 3/12/2024 
		*if ((count == idx) && (count == 1))  only one node 
		*	return (NULL);	*/
	}
	/*count--;  reduced by 1 as count has additional 1 after exiting while */
	if (count > idx)
	{
		return (NULL);
	}
	/**
	*if ((count == 1) && (idx == 1))
	*	return (NULL); 	*/
	prev_temp->next = new_node;
	new_node->prev = prev_temp;
	
	temp->prev = new_node;
	new_node->next = temp;

	/**
	**temp->next = new_node;
	**new_node->prev = prev_temp;  new_node->prev points to prev_temp */
	/** go to next address of temp */
	/**temp = temp->next;
	*temp->prev = new_node;  next address of temp->prev now point to new_node */
	/*new_node->next = temp; */
	return (new_node);
}
