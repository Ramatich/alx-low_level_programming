#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 * @n: The value for which the times table will be printed
 *
 * Description: If n is greater than 15 or less than 0, the function should
 * not print anything.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, result;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j == 0)
            {
                _putchar('0');
            }
            else
            {
                _putchar(' ');

                if (result < 10)
                    _putchar(' ');

                if (result < 100)
                    _putchar(' ');

                _putchar((result / 100) + '0');
                _putchar(((result / 10) % 10) + '0');
                _putchar((result % 10) + '0');
            }

            if (j != n)
                _putchar(',');

            if (j == n)
                _putchar('\n');
        }
    }
}
#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 * @n: The value for which the times table will be printed
 *
 * Description: If n is greater than 15 or less than 0, the function should
 * not print anything.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, result;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j == 0)
            {
                _putchar('0');
            }
            else
            {
                _putchar(' ');

                if (result < 10)
                    _putchar(' ');

                if (result < 100)
                    _putchar(' ');

                _putchar((result / 100) + '0');
                _putchar(((result / 10) % 10) + '0');
                _putchar((result % 10) + '0');
            }

            if (j != n)
                _putchar(',');

            if (j == n)
                _putchar('\n');
        }
    }
}
 
