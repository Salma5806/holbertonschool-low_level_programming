#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_list - print all th elements of a list_t list.
* @h: the list_t list.
*
* Return: the number of nodes in h.
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h->next = h;
	}
	return (nodes);
}
