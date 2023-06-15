#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: NULL on failure or a pointer pointing to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1;
	size_t len2;
	size_t len;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	len = len1 + len2;

	result = malloc((len + 1) * sizeof(char));

	if (result == NULL)
	return (NULL);

	if (s1 != NULL)
		strcpy(result, s1);
	if (s2 != NULL)
		strcat(result, s2);

	return (result);
}
