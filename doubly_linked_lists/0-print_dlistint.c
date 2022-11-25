#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* print_dlistint - prints all the elements of a double linked list
* @h: the double linked list to prints
*
* Return: the number of nodes of the double linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++nodes;
		h = h->next;
	}
	return (nodes);
}
