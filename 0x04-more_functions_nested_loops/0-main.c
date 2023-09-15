#include "main.h"
/* Add this line */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long n = 612852475143;
    int largest_prime;

    largest_prime = largest_prime_factor(n);
    printf("%d\n", largest_prime);

    return (0);
}

