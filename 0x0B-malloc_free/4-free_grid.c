#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free memorry of 2d array
  * @grid : input input poiner to pointer
  * @height : input int
  * Return: will return void but free all allocated memorry
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
