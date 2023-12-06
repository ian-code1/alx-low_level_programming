#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: the head of a list
 * Return: the freed number
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
