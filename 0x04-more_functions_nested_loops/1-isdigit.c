#include "main.h"
/**
 *_isdigit - progrma prints whether a number is present
 * @c: the value we are using
 *Return: always 0 (success)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
