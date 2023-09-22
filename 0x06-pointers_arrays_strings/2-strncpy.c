#include "main.h"

/**
 * _strncpy - Copy at most n characters from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    while (i < n)
    {
        dest[i] = '\0'; /* Pad with null bytes if needed */
        i++;
    }

    return dest;
}

