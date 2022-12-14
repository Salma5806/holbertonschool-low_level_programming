#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - Adds a new node at the end of a list
* @head: The original linked list
* @str: The string to add to the node
*
* Return: The address of the new list or NULL if it failed
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
 * _strlen - returns the length of a string.
 * @s: pointer of string.
 *
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
	x++;
	s++;
	}

	return (x);
}
