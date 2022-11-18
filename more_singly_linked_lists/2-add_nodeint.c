#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
* add_nodeint - Adds a new node at the beginning of a linked list
* @head: the head of the linked list
* @n: the value to add to the new node
* Return: the address of the new element or NULL it faild
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head != NULL)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = *head;

		*head = newnode;
		return (newnode);
	}
	return (0);
}
