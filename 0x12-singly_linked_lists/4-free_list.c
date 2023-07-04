#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees all the nodes in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Description: This function iterates through the linked list starting from
 * the provided head node and frees all the nodes, releasing the memory
 * occupied by each node and its associated string data
 *
 * Return: (void) This function does not return anything
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
