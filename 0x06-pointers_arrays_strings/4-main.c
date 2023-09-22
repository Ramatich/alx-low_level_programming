#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int n = sizeof(a) / sizeof(int);

    int i; /* Declare i before the loop */

    printf("Original Array: ");
    for (i = 0; i < n; i++) /* Initialize i before the loop */
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");

    reverse_array(a, n);

    printf("Reversed Array: ");
    for (i = 0; i < n; i++) /* Initialize i before the loop */
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");

    return (0);
}

