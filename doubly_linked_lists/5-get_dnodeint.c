#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
* get_dnodeint_at_index - locates a given node of a listint_t linked list.
* @head: A pointer to the head of the listint_t list
* @index: the index of the node to locate - indices start at 0
*
* Return: if the node does not exist - NULL
* otherwise - the located node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
