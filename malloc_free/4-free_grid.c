#include "main.h"

void free_grid(int **grid, int height);

/**
 * free_grid - main entry
 *
 * Description: free previously a 2D array
 * from 3-alloc_grid.c
 * @grid : int array grid
 * @height : int height (row of array)
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count = 0;
	int length;
	/*** Redudant - discovered later not needed **/
	while (*grid[count] != '\0')
	{
		if (grid[count] == NULL)
		{
			/* to free grid[count] to please valgrind */
			while (count >= 0)
			{
				free(grid[count]); /*free grid[][]*/
				count--;
			}
			free(grid); /* Free grid[]) */
			return; /*return NULL and terminate */
		}
		else
		{
			count++;
		}
	}
	length = count; /* length of int array */
	count = length;
	/*******************************************/
	count = 0;
	while (count < height)
	{
		free(grid[count]); /* x row of grid */
		count++;
	}
	free(grid);
}
