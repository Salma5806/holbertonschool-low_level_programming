#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_dnodeint - adds a newnode at the beginnig
* @head: ....
* @n: the number to place in the new node
* Return: the new head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (*head != NULL)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
		return (*head);

	}
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (*head);

}
