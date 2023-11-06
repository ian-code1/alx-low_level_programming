#include "main.h"
/**
 * _strlen_recursion - func that returns lenght of a string
 * @s: the string input
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
int it = 0;
if (*s)
{
it++;
it += _strlen_recursion(s + 1);
}
return (it);
}
