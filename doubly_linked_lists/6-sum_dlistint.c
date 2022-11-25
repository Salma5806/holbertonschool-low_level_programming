#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* sum_dlistint - calculates the sum of all the data (n) of a listint_t list
* @head: a pointer to the head of the listint_t list
*
* Return: if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
