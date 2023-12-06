#include "lists.h"
/**
 * free_listd - freee alinked list
 * @head:the head of a lisr
 * Return: no return value
 */
void free_listp(listp_t **head)
{
listp_t *temp;
listp_t *curr;
if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
/**
 * print_listint_safe - a function that prints a linked list
 * @head: the befining of a linked list
 * Return: the number of odes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
listp_t *hptr, *new, *add;

hptr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listp_t));
if (new == NULL)
	exit(98);
new->p = (void *)head;
new->next = hptr;
hptr = new;

add = hptr;

while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&hptr);
return (nodes);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nodes++;
}
free_listp(&hptr);
return (nodes);
}
