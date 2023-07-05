#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all element in a list_t list.
 * @h: Pointer to the head of the linked list
 *
 * Description: This function traverses the linked list starting from the
 * provided head node and prints the string data of each node, along with the
 * number of nodes, in the format: [index] string\n. If the linked list is
 * empty, it will print nothing
 *
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
