#include "main.h"
/**
 *_print_rev_recursion - func to print string in reverse
 *@s: the character to be inputed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
