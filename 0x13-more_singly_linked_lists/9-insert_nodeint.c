#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a new node at given position
 * @head: list of the first node pointer
 * @idx: added new node index
 * @n: numbers of data inserted in new node
 * Return: ponter to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
