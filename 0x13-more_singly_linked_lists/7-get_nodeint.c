#include "lists.h"
/**
 * get_nodeint_at_index - a func hat gets the nth node
 * @head: the pointer to the first node
 * @index: the nth node
 * Return: teh nth node is to be returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index; a++)
{
if (head == NULL)
	return (NULL);
head = head->next;
}
return (head);
}
