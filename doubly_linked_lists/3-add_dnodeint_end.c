#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/** add_dnodeint_end - Add a node in the end
 * @new: New node
 * @tmp: Temp file
 * Returns: New
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = tmp;
	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;

	}
	return (new);
}
