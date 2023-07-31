#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @count - size_t
 * @h: string
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

		count++;
		h = h->next;
	}
	return (count);
}
