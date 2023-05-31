#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Description: a function that returns the length of a string
 *
 * Return: 0 on success
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
return (length);
}
