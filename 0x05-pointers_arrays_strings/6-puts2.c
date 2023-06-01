#include "main.h"

/**
 * puts2 - prints every other char of a string, starting with the first char
 * @str: string to be checked
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
