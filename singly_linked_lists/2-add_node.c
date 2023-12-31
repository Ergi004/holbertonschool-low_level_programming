#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node
 * @new_node - list_t
 * @head: Koka
 * @str: string
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = malloc(sizeof(char) * len);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->str, str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
