#include "main.h"
/**
*print_triangle - function to print a triangle
 * @size: thw size of the triangle
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j >= 0; j--)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
