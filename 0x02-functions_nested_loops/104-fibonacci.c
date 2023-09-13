#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    print_fibonacci();
    return (0);
}

/**
 * print_fibonacci - Print the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    int i;
    unsigned long int fib1 = 1, fib2 = 2, next;

    for (i = 0; i < 98; i++)
    {
        _putchar(fib1 / 1000000000 + '0');
        _putchar(fib1 / 100000000 % 10 + '0');
        _putchar(fib1 / 10000000 % 10 + '0');
        _putchar(fib1 / 1000000 % 10 + '0');
        _putchar(fib1 / 100000 % 10 + '0');
        _putchar(fib1 / 10000 % 10 + '0');
        _putchar(fib1 / 1000 % 10 + '0');
        _putchar(fib1 / 100 % 10 + '0');
        _putchar(fib1 / 10 % 10 + '0');
        _putchar(fib1 % 10 + '0');

        if (i < 97)
        {
            _putchar(',');
            _putchar(' ');
        }

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    _putchar('\n');
}
