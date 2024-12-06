#include <unistd.h>

/**
 * _putchar - print a char 
 *
 * @c : input char
 * Return : 1 if successful else -1
 */

int _putchar(char c)
{ 
	/*int count = 0;*/

	return (write(1, &c, 1));
}
