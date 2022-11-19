#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - Adds a new node to the end of a linked list
* @head: The head of the linked list
* @n: The value to add to the end of the linked list
*
* Return: The address of the new element, or NULL it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;



		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = NULL;

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

			temp->next = newnode;
			return (temp);
		}


	return (NULL);
}
