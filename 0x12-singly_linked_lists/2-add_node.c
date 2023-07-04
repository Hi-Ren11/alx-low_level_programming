#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_node : this  adds a new node at the beginning of a list_t list
 * @h: the header of the list_t list.
 * Return: return null if failed.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	size_t a = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[a])
		a++;

	new->str = strdup(str);
	new->len = a;
	new->next = *head;
	*head = new;

	return (*head);

