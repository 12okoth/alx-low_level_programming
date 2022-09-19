#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * Auth: Joseph Ongoro
 * @a: Integer a
 * @b: Integer b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
