#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @d: function parameter
 *
 * Return: r
 */

int print_last_digit(int d)
{
	int r;

	r = d % 10;
	if (d < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
