#include "main.h"
/**
 *print_most_numbers - program to print most numbers except 2 and 4
 * Return: always 0 (success)
 */
void print_most_numbers(void)
{
int c = '0';
while ((c >= '0' && c <= '9') && (c != '2' && c != '4'))
{
_putchar(c);
c++;
}
_putchar('\n');
}
