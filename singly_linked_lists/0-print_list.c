#include "lists.h"
#include <unistd.h>

int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *destination, char *source);
void _puts(char *s);

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

	*hcopy = *h; /* keep a copy of the original list_t *h */
	/*_strcpy(hcopy->str, h->str);*/

	/**
	*hcopy->str = h->str;
	*hcopy->len = h->len;
	*hcopy->next = h->next;
	*/

	*hcopy = *h;
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

/**
 * _putchar - custom putchar function to print a character
 *
 * @c : character to be printed
 * Return: 1 (Successful) else 0 (fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - custom strlen function to count character in string
 *
 * @s : string input
 * Return: (count)
 */

int _strlen(char *s)
{
	int count = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[0] != '\0')
	{
		count += 1;
		/*s++;*/
	}
	return (count);
}

/**
 * _strcpy - custom strcpy function to copy two strings
 *
 * @destination : string pointer to be copied to
 * @soruce : string point to be copied from
 * Return: string pointer destination
 */

char *_strcpy(char *destination, char *source)
{

	int length;
	int count = 0;

	length = _strlen(source); /* length of source */
	while (count < length)
	{
		destination[count] = source[count];
		count++;
	}
	destination[count] = '\0';
	return (destination);
}

/**
 * _puts - custom puts function to print a string
 *
 * @s : string to be printed
 * Return: void
 */

void _puts(char *s)
{
	int length = _strlen(s);

	/* while (count < length)*/
	while (*s != '\0')
	{
		/* _putchar(s[count]);*/
		_putchar(*s);
		/*count+=1;*/
		s++;
	}
	return (0);
}
