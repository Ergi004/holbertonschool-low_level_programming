#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_len - singly linked list
 * @count - size_t
 * @h: string
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

		count++;
		h = h->next;
	return (count);
}
