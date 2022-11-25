#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_dlistint - frees double linked list
* @head: the pointer to the first node
*
*
*/
void free_dlistint(dlistint_t *head)
{
	dliistint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;
		free(newnode->n);
		free(newnode);
	}
	free(head);
}
