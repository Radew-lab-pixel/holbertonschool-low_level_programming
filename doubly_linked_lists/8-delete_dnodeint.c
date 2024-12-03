#include "lists.h"

dlistint_t *remove_neg_node(dlistint_t *h, int count);

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
	while (count < index)
	{
		if (temp->next == NULL)
			return (-1); /* index is larger the actual no. of nodes */
		/*temp = (remove_neg_node(temp)); */
		prev_temp = temp; /*prev_temp to point to current temp */
		temp = temp->next; /* temp point to next address */
		count++;
	}
	if (index > count) /* index required is greater than no, of nodes */
		return (-1);
	post_temp = temp->next; /* go next address after temp */
	post_temp->prev = prev_temp; /* post_temp->prev ppint to prev_temp*/
	prev_temp->next = post_temp; /* prev_temp-> next point to post_temp */
	free(temp);
	/* *head = remove_neg_node(*head, count); */
	return (1); /*successful*/
}
/**
 * remove_neg_node - remove nodes with negative_value
 *
 * @h : list
 * @count : counter;
 * Return: modifiedlist
 */

dlistint_t *remove_neg_node(dlistint_t *h, int count)
{
	dlistint_t *temp;
	dlistint_t *prev_temp;
	dlistint_t *post_temp;
	int i = 0;

	if (h != NULL)
	{
		/*return (NULL); */
		exit(0);
	}
	temp = h;
	count = count - 1; /* reduced count by 1 */
	while (i < count)
	{
		if (temp->n < 0)
		{
			if (temp->next != NULL)
			{
				post_temp = temp->next;
				prev_temp = temp->prev;

				post_temp->prev = prev_temp;
				prev_temp->next = post_temp;
				temp = NULL;
				/*temp = post_temp; */
				/*temp = prev_temp;*/
			}
			else /* temp->next == NULL thus last node*/
			{
				prev_temp = temp->prev;
				prev_temp->next = NULL;
				temp = NULL;
				/*temp = prev_temp;*/
				/*free(temp);*/
			}
		}
	}
	/*return (0); fail */
	/*return (temp); */
	/*return (prev_temp);*/
	return (h);
}
