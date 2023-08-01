#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node in the end
 * @head: Head
 * @n: Constant integer
 * @new: New node
 * @temp: Temp file
 * Return: New
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
