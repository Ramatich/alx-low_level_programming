#include "main.h"
/**
 * swapping values of two integers
 * 
 * @a: An integer to swap
 * @b:another integer to swip
 * This function takes two integer pointers, 'a' and 'b', and swaps their values.
 * Return void
 */
void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
