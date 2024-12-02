#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head : linked list input
 * Return: void (0) always
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{	
		/*tmp = head; */
		while (head->next != NULL)
		{	
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);

		}
		free(head);
		return;
	}

}
