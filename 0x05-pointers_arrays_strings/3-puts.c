#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1, and set errno on failure.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts - Prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}

