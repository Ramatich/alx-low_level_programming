#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
int largest_prime_factor(long n)
{
    int factor = 2;
    int largest_prime = 0;

    while (n > 1)
    {
        if (n % factor == 0)
        {
            if (factor > largest_prime)
                largest_prime = factor;
            n /= factor;
        }
        else
        {
            factor++;
        }
    }

    return (largest_prime);
}

