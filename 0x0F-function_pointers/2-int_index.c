#include "function_pointers.h"
/**
 *  int_index - search for an integer
 *  @array: target array holding int
 *  @size: the array size
 *  @cmp: function pointer to comparre search int
 *  Return: int element match -1 if size is <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
	return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}