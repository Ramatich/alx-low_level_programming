#include "main.h"

char *rot13(char *str)
{
    int i = 0;
    char c;

    while (str[i])
    {
        c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            while ((c >= 'A' && c <= 'Z' && c > 'M') || (c >= 'a' && c <= 'z' && c > 'm'))
                c -= 13;
            while ((c >= 'A' && c <= 'Z' && c <= 'M') || (c >= 'a' && c <= 'z' && c <= 'm'))
                c += 13;
        }
        str[i] = c;
        i++;
    }

    return str;
}

