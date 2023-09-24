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

    // Find the end of the dest string
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    // Copy characters from src to dest
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;  // You were missing a semicolon here
    }

    // Add a terminating null byte to the end of the combined string
    dest[i] = '\0';

    return dest;
}
