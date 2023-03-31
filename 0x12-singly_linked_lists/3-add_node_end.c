#include "lists.h"

/**
  * add_node_end - will add node to begining of linked list
  * @head: linked list header pointer
  * @str: string to be added to the node
  * Return: will return pointer to new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		while ((*tmp).next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->next = NULL;
	}
	return (new);
}
