#include <stdio.h>

/**
 * himain: this function  runs before main
 *
 * Return: 0
*/

void __attribute__ ((constructor)) himain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

