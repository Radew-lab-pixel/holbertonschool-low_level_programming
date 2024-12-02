#include "lists.h"
#include <unistd.h>

int _putchar(char c);

/**
 * print_list -  function that prints all the elements of a list_t list
 *
 * @h : structure of list_t
 * Return: length of h->str which is hcopy->len
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/*create list_t *hcopy;*/
	list_t *hcopy = (list_t *)malloc(sizeof(list_t));

	/* *hcopy = *h;  keep a copy of the original list_t *h */
	/*_strcpy(hcopy->str, h->str);*/

	/**
	*hcopy->str = h->str;
	*hcopy->len = h->len;
	*hcopy->next = h->next;
	*/

	if (h == NULL)
	{
		/*printf("[0] (nil)\n");*/
		return (count);
	}
	*hcopy = *h; /* keep a copy of orignal list_t *h*/

	while (hcopy != NULL)
	{
		if (hcopy->str == NULL)
		{
			/*hcopy->len = 0;*/
			/*_strcpy(hcopy->str, "(nil)");*/
			/*h->str = "nil";*/
			/*h->len = 0;*/
			/*h->next = h->next;*/
			/*return (0);*/
			/**
			*_putchar('[');
			*_putchar('0');
			*printf(" (nil\n");
			*
			*_puts("] (nil)\n");
			*/
			printf("[0] (nil)\n");
		}
	/*while (hcopy->next != NULL) */
	/*while (h != NULL)*/
		else
		{
			/*s = h->str; */
			/**
			* _putchar('[');
			*_putchar(h->len + '0');
			*_putchar(']');
			*_puts(h->str);
			* _puts(s);
			*/
			printf("[%u] %s\n", hcopy->len, hcopy->str);
			/*_putchar('\n');*/
		}
			/*hcopy = hcopy->next;*/
			hcopy = hcopy->next;
			count++;
	}
	/*return (hcopy->len);*/
	free(hcopy); /* free local hcopy */
	return (count);
}
