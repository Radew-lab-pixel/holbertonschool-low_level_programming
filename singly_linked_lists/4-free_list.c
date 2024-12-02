#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head : linked list input
 * Return: void (0) always
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		free(head->str);
		free(head);
		return;
	}

}
