#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
int largest_prime_factor(long n)
{
    int largest = -1;
    int i;

    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
        largest = n;

    return (largest);
}

