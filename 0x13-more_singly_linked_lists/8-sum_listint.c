#include "lists.h"
/**
 * sum_listint - afunction that gets the sum
 * @head: a pointer to the firt node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
	return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
