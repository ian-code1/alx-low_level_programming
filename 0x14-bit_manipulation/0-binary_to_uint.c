#include "main.h"
/**
 *  binary_to_uint - a program that converts binary to numbers
 *  @b: a character pointer to a string with the binary numbers
 *  Return: the converted decimal inpput
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len, i, sum, j, pow;
int base;
base = 2;
sum = 0;
pow = 1;

if (b == NULL)
	return (0);
for (len = 0; b[len] != '\0'; len++)
	;
if (len == 1 && (b[0] == '0' || b[0] == '1'))
	return (b[0] - 48);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[1] != '1')
	return (0);
for (j = len - 1; j > 0; j--)
	pow = pow *base;
sum = sum + (pow * (b[i] - 48));
len--;
pow = 1;
}
return (sum);
}
