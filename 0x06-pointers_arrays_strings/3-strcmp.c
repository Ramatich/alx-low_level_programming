#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if the strings are equal, a negative value if s1 < s2,
 * and a positive value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    /* If one string is shorter than the other */
    if (s1[i] != '\0')
    {
        return (s1[i]);
    }
    else if (s2[i] != '\0')
    {
        return (-s2[i]);
    }

    return (0); /* Strings are equal */
}

