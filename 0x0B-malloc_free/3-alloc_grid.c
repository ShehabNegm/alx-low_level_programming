#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - 2d array of integers
  * @width : input int
  * @height : input int
  * Return: will return pointer 2d array of integers
  */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);


	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(sizeof(int) * width);
			if (p[i] == NULL)
			{
				while (i >= 0)
				{
					free(p[i]);
					i--;
				}
				free(p);
				return (NULL);
			}
			else
			{
				for (j = 0; j < width; j++)
				{
					p[i][j] = 0;
				}
			}
		}
	}
	return (p);
}
