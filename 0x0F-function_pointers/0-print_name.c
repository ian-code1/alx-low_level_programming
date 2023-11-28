#include "function_pointers.h"
/**
 * print_name - a function that prints names
 * @f: variable to hold the string name
 * @name: nameof the person
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
