#include "main.h"

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
    _putchar('0' + largest_prime);
    _putchar('\n');

    return (0);
}

