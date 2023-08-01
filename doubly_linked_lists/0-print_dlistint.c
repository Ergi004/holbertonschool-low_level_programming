#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - singly linked list
 * @h: string
 * @i: integer
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;


	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}	
