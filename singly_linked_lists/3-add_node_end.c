#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list
* @head: the original linked list
* @str: the string to add to the node
*
* Return: the address of the new node or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newnode, *temp;

	if (str != NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);


		newnode->str = strdup(str);
		newnode->len = strlen(str);
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
	}
	return  (NULL);
}

/**
* _stlen - returns the length of a string
* @s: string to count
*
* Return: string length
*/
int _strlen(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
