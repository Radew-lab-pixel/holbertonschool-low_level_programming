#include "function_pointers.h"

/**
 * int_index -  return the first index of the matched content of array
 *
 * @array: pointer to integer array
 * @size: size of the array
 * @cmp : callback function of comparing each variable of array
 *
 * Return: integer of first index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* call back function reference */
	/*index = int_index(array, 20, is_98) */
	/* int is_98(int elem) */
	/* return (98 == elem); */
	
	int *tarray = array; /* copy of array */

        int count = 0;
        int flag;

	if (size <= 0)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		flag = cmp(tarray[count]);
		if (flag != 0)
		{
			return (count);
		}
	}
	return (-1);
}
