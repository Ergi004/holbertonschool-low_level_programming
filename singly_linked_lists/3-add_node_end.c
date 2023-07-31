#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node
 * @new_node - list_t
 * @head: Koka
 * @str: string
 * Return: New node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last_n;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
			last_n = last_n->next;
		last_n->next = new;

	}
	return (new);
}
