#include "main.h"
/**
 *_atoi - function to convert a string tto an integer
 *@s: the first integer slash character
 * Return: 0
 */
int _atoi(char *s)
{
int i, n, sign;
i = 0;
n = 0;
sign = 1;
if (s[0] == '-')
{
sign = -1;
i = 1;
}
while (s[i] >= '0' && s[i] <= '9')
{
n = n * 10 + (s[i] - '0');
i++;
}
return (n *sign);
}
