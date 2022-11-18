#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a linked list
* @head: the pointer to the first node
*
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;
		free(newnode->str);
		free(newnode);
	}
	free(head);
}
