#include "function_pointers.h"

/**
 * array_iterator -  execute each element of an array
 *
 * @array: pointer to integer array
 * @size: size of the array
 * @action : callback function of printf
 *
 * Return: Nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;

	int *tarray = array; /* pointer to array */

	/*if (size < 0)*/
	/*	exit(0); */

	for (count = 0; count < size; count++)
	{
		action(tarray[count]);
	}
	/*return; -- removed due to betty */
}
