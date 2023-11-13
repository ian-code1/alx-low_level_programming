#include "main.h"
#include <stdlib.h>
/**
 * str_concat - func that concatenates two strings
 * @s1: first string
 * @s2: secod string
 * Return: pointer to the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
size_t len1, len2, i, j;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
len1 = 0;
while (s1[len1] != '\0')
{
len1++;
}
len2 = 0;
while (s2[len2] != '\0')
{
len2++;
}
ptr = malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j <= len2; j++)
{
ptr[i] = s2[j];
i++;
}
return (ptr);
}
