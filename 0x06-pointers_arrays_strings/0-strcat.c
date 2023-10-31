#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which the source will be appended.
 * @src: The source string to append to the destination.
 * Return: A pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
