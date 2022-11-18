#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* add_node - adds a new node at the beginnig of a list _t list.
* @head: a pointer to the head of the list_t
* @str: the string ti be addded to the list_t
*
* Return: if the function fails- NULl
* otherwise - the adress of the new elemnts
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int len;

	if (head != NULL && str != NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);

		for (len = 0; str[len]; len++)

		newnode->str = strdup(str);
		newnode->len = len;
		newnode->next = *head;

		*head = newnode;
	}
	return (newnode);
}
