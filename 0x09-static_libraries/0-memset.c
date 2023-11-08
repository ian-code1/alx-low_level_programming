#include "main.h"
/**
 *_memset - a function that fills the memory witha constant byte
 *@s: the memory address to be filled
 *@b: the destined value
 *@n: number of byte to be changed
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
