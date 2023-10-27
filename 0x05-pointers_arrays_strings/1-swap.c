# include "main.h"
/**
 * swap_int - function to swap an integer
 * @a: an integer to swap
 *@b: the second integer to swap
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
