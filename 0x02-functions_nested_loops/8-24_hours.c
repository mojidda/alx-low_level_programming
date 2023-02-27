#include "main.h"

/**
 * jack_bauer - series 24
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int m;
	int h;

	for (m = 0 ; m < 24 ; m++)
	{
		for (h = 0 ; h < 60 ; h++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar('\n');
		}
	}
}
