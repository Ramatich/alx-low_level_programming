#include "main.h"
/**
 * swapping values of two integers
 * 
 * @a: An integer to swap
 * @b:another integer to swipe
 *
 * Return void
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
