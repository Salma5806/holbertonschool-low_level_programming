#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
* list_len - finds the number of elements in a linked list_t list
* @h: the linked list_t list.
*
* Return: the number of element in h
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
