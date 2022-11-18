#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
* print_listint - prints all the elements of a listint_t list
* @h: a pointer to the head of the list_t list
*
* Return: the number of nodes in the list_t list
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n)
		h = h->next;
	}
	return (nodes);
}
