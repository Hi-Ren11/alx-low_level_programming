#include "main.h"

/**
 * _memset - fills @n bytes of th memory pointed by @s with const @b bytes
 * @s: pointer to memory
 * @n: number of bytes to be filed
 * @b: const bytes to be filled with
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
