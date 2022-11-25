#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_dnodeint_end - adds a newnode at the end
* @head: the head of the doubly linked list
* @n: the number to place in the newnode
* Return: the new head of the doubly linked list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		newnode->next = NULL;
		newnode->prev = temp;
		temp->next = newnode;
		return (newnode);
	}

	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (*head);
}
