#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x alpahbets
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alx;
	char j;

	for (alx = 1 ; alx <= 10 ; alx++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}

