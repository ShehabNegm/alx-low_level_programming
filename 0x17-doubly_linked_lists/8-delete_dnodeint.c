#include "lists.h"
/**
  * len - function to return length of d linked list
  * @h: header of the doubly linked list
  * Return: will return length of the list
  */

size_t len(dlistint_t *h)
{
	size_t length = 0;
	dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	return (length);
}

/**
  * delete_dnodeint_at_index - function to delete node at index
  * @head: header of the doubly linked list
  * @index: index of the required node to be deleted
  * Return: will return 1 if succeeded , 0 otherwise
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	size_t length = len(*head);
	dlistint_t *tmp = *head;
	dlistint_t *del;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		
		*head = tmp->next;
		tmp->prev = NULL;
		free(tmp);
		return (1);
	}

	if (index > length)
		return (-1);

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}

	if (index == length - 1)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	del = tmp;
	tmp->next->prev = del->prev;
	tmp->prev->next = del->next;
	free(del);
	return (1);
}
