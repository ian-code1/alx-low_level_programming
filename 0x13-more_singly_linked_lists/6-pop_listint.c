#include "lists.h"
/**
 * pop_listint - a functionn that deletes the head node of a list
 * @head: the head node
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;

if (head == NULL || *head == NULL)
	return (0);
n = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (n);
}
