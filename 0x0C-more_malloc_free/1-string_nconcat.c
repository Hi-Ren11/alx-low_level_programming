#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concate
 * @s2: string to concate
 * @n: number of bytes
 *
 * Return:pointer shall point to a newly allocated space in memory which
 * contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	s = malloc(len1 + n + 1);

	if (s == NULL)
		return (NULL);

	strcpy(s, s1);
	strncat(s, s2, n);

	return (s);
}
