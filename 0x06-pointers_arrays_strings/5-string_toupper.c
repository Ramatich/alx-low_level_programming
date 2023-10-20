#include "main.h"
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - 32;
        }
        ptr++;
    }

    return str;
}

