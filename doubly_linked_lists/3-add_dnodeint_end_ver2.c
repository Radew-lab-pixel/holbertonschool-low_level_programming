#include "lists.h"

/**
 * add_dnodeint_end - function to add a node at the end of list
 *
 * @head : pointer to head of linked list
 * @n : integer value to be input
 * Return: new node or NULL if unsuccessful
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	dlistint_t *temp; /*local pointer to be referenced to head */
	/*dlistint_t *new_nodeTemp;  solve valgrind issue at Task 8 */

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node; /* assigned new_node to be head */
		/*return (new_node); */
		/* add to solve valgrind in task 8 */
		/*free(new_node); */
		return (*head);  /*valgrind solution */
	}
	else
	{
		temp = *head; /*assign local pointer to head */
		while (temp->next != NULL)
		{
			temp = temp->next; /*scroll along the lists */
		}
		new_node->prev = temp;
		temp->next = new_node;

		/*temp = temp->next; add to solve valgrind in task 8*/
		/*free(new_node); */
		return (temp);  /*valgrind solution */
	}
	/** solve valgrind issue at Task 8*/
	/*new_nodeTemp = new_node; */
	/*free(new_node); */
	/*return (new_node); remove to solve valgrind in task 8 */ 
	
	/*return (new_nodeTemp);*/
}
