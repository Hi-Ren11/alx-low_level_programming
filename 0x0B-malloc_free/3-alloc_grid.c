#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: heigth of the arraay
 *
 * Return: NULL on failure or width or height is 0 or negative, return NULL
 * else return a pointer to a 2 dimensionsl array
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **array;
	int area = width * height;

	if (area <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(array[x]);
			free(array);
		}
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}
	return (array);
}
