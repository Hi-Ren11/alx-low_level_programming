#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: the pointer to the newly created array or NULL if min > max
 */

int *array_range(int min, int max)
{
	int x;
	int y;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	y = max - min + 1;

	array = malloc(sizeof(int) * y);
	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		array[x] = min++;

	return (array);
}
