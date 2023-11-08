#include "main.h"
/**
 *_isupper - program to check for uppercase characters
 * @c: variable test
 * Return: always 0 (success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
