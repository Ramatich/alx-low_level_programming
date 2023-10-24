#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates the first occurrence of a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (!*needle)
        return haystack;

    while (*haystack)
    {
        i = 0;
        j = 0;

        while (needle[j] && haystack[i] == needle[j])
        {
            i++;
            j++;
        }

        if (!needle[j])
            return haystack;

        haystack++;
    }

    return NULL; 
}

