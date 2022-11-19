#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
* free_listint2 -frees a linked list
* @head:the pointer to the first node
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
