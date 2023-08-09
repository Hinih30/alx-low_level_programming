#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns pointer to 2 dimensional array of integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **bed;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	bed = malloc(sizeof(int *) * height);

	if (bed == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		bed[a] = malloc(sizeof(int) * width);

		if (bed[a] == NULL)
		{
			for (; a >= 0; a--)
				free(bed[a]);

			free(bed);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			bed[a][b] = 0;
	}

	return (bed);
}
