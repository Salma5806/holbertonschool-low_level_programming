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

	if (head != NULL && str != NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);

		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;

		*head = newnode;
		return (newnode);
	}
	return (0);

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
