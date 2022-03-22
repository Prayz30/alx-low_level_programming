#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: an inout integer pointer
 * @d: an inout integer pointer
 * Return: Always 0.
 */

void swap_int(int *a, int *d)
{
	int change;

	change = *a;
	*a = *d;
	*d = change;
}
