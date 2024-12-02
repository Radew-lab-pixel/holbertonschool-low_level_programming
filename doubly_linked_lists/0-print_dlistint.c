#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h : list input
 * Return: number of elements(nodes)
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	/*const dlistint_t *temp;  create a temp file */
	/* const dlistint_t typecast issue and also valgrind issue */

	if (h == NULL) /* error checking for h */
	{
		return (0);
	}

	/* temp = *h; */
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	/* display the last node */
	printf("%d\n", h->n);
	count++;
	return (count);
}
