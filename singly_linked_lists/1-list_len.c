#include "lists.h"

int _putchar(char c);

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h : linked list list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	list_t *hcopy = (list_t*) malloc(sizeof(list_t)); /* make copy of list_t *h*/

	if (h == NULL)
	{	
		free(hcopy);
		return (0);
	}

	*hcopy = *h;

	while (hcopy != NULL)
	{
		count++;
		hcopy = hcopy->next;
	}
	/*free(hcopy->str); do not use as will cause segmentation error */
	free(hcopy);
	return (count);
}
