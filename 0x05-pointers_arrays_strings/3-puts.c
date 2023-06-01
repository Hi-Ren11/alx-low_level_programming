#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: function that prints a string, followed by a new line to stdout
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
