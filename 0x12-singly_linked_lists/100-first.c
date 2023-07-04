#include <stdio.h>

/**
 * himain - this function  runs before main
 *
 * Description: This function is annotated with the GCC attribute
 * '__attribute__((constructor))', which causes it to be executed
 * automatically before the 'main' function is called during the program's
 * initialization phase
 *
 * Return: void
*/

void __attribute__ ((constructor)) himain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

