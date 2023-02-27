#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: integer swap
 * @b: integer swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
