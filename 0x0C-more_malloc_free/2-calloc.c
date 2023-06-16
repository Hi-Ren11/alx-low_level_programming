#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: element of size
 * @size: size of the memory
 *
 * Return: a pointer to the allocated memory or
 * nmemb or size is 0, then _calloc returns NULL
 * else malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;

	i = malloc(j);

	if (i != NULL)
	{
		memset(i, 0, j);
	}
	return (i);
}
