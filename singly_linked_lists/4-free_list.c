#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head : linked list input
 * Return: void (0) always
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)

	{	/**
		*free(head->next);
		*free(head->str);
		*/
		free(head);
		/*printf("Freed !\n");*/
		return;
	}
	else
	{
		/*tmp = head; */
		while (head->next != NULL)
		{
			/*temp = head;*/
			/*head = head->next; */
			temp = head->next;
			free(head->str);
			/*free(head->next);*/
			free(head);
			head = temp;
			/*free(temp->str);*/
			/* removed below due to segmentation error */
			/*free(temp->next);*/
			/*free(temp->len);*/
			/*free(temp);*/
		}
		/*free(temp->str); */
		/*free(temp);*/
		free(head->next);
		free(head->str);
		free(head);
		return;
	}

}
