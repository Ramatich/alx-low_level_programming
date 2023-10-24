#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept.
 * @s: The string to search.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first matching character in s, or NULL if no match
 * is found.
 */
char *_strpbrk(char *s, char *accept)
{
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
                return s;
        }
        s++;
    }

    return NULL;
}

