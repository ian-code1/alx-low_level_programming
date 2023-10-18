#include "main.h"
/**
 *print_numbers - program to print natural numbers
 *Return: 0
 */
void print_numbers(void)
{
int c = '0';
while (c >= '0' && c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}
