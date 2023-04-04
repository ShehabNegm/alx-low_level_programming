#include "lists.h"

/**
  * delete_nodeint_at_index - will delete node at index position
  * @head : linked list head
  * @index: index of required node
  * Return: will return 1 if it is succeeded, -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *after_tmp;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	if (index > len)
		return (-1);

	tmp = *head;

	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	after_tmp = tmp->next;
	tmp->next = after_tmp->next;
	free(after_tmp);
	return (1);
}
