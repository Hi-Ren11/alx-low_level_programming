#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be checked
 */

void print_rev(char *s)
{
	int a = 0;
	int b = 0;

	while (s[a] != 0)
		a++;

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
