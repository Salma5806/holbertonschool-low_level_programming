#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: The head of the doubly linked list
* @idx: The index in which insert the new node
* @n: The number to insert in the new node
*
* Return: The address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *newnode = NULL;
	unsigned int i = 0, length = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (length == idx)
		return (add_dnodeint_end(h, n));

	temp = *h;
	while (temp != NULL)
	{
		if (i == idx)
		{
			newnode = create_node(n, temp, temp->prev);
			temp->prev = newnode;
			temp = newnode;
			temp->prev->next = newnode;
			return (newnode);
		}

		temp = temp->next;
		i++;
	}

	return (temp);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

/**
  * create_node - Create a new node with values
  * @n: The number of the new node
  * @next: The next node of the new node
  * @prev: The previous node of the new node
  *
  * Return: The address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = next;
	newnode->prev = prev;
	return (newnode);
}
