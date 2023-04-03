#include "lists.h"

/**
  * get_nodeint_at_index - will return the node at index index
  * @head : linked list head
  * @index: index of required node
  * Return: will return pointer to node at index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
