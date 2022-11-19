#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
* free_listint - frees a linked list
* @head: the pointer to the first node
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;
		free(newnode);
	}
	free(head);
}
