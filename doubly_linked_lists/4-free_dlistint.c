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
	dlistint_t *newnode, *next = NULL;

	while (head != NULL)
	{
		newnode = head;
		next = newnode->next;
		free(newnode);
		newnode = next;
	}
}
