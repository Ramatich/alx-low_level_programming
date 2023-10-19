#include "main.h"
/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src to append to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;
/* Find the length of the dest string */
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append characters from src to dest */
while (i < n && src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
/* Null-terminate the resulting string */
dest[dest_len + i] = '\0';
return dest;
}

