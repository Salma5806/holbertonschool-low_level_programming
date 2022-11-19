#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
* pop_listint - deletes the head node of a listint_t list.
* @head: A pointer to the address of the head of the listint_t list.
*
* Return: if the linked list is empty.
*   otherwise - the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
