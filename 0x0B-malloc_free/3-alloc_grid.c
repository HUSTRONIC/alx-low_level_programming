#include "main.h"

#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: input to the for width
 * @height: input to the height
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **k;

	int x;
	int y;

	if (width <= 0 || height <= 0)

		return (NULL);

	k = malloc(sizeof(int *) * height);

	if (k == NULL)

		return (NULL);

	for (x = 0; x < height; x++)
	{
		k[x] = malloc(sizeof(int) * width);

		if (k[x] == NULL)
		{
			for (; x >= 0; x--)
				free(k[x]);

			free(k);
			return (NULL);
		}

	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			k[x][y] = 0;
	}
	return (k);

}
