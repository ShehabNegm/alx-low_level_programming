#include "lists.h"

/**
  * insert_nodeint_at_index - will insert node at index position
  * @head : linked list head
  * @idx: index of required node
  * @n : int data of the linked list
  * Return: will return pointer to node inserted
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int len = 0;

	if (new == NULL)
		return (NULL);

	tmp = *head;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	if (idx > len && (idx - len) > 1)
	{
		free(new);
		return (NULL);
	}
	tmp = *head;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < (idx - 1) && tmp != NULL; i++)
			tmp = tmp->next;
		if (idx == len)
			new->next = NULL;
		else
			new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
