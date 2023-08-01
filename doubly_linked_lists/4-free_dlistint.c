#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - print list values
 * @head: list value to print
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
