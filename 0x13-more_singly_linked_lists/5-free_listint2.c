#include "lists.h"

/**
  * free_listint2 - will free a linked list memory and set head back to NULL
  * @head : linked list head
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmph;

	if (head != NULL)
	{
		tmph = *head;

		while (tmph != NULL)
		{
			tmp = tmph;
			tmph = tmph->next;
			free(tmp);
		}
		*head = NULL;
	}
}

