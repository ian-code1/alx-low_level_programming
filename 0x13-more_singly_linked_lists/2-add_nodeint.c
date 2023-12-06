#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the begining of a list
 * @head: the head of a linked list
 * @n: new integer to be creted
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
if (head == NULL)
	return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);
if (*head == NULL)
	new_node->next = NULL;
else
	new_node->next = *head;
new_node->n = n;
*head = new_node;
return (*head);
}
