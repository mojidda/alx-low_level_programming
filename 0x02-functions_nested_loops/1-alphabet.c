#include "main.h"
/**
 * print_alphabet - function that prints alphabet in lower case
 *
 * Return: Always 0
 */


void print_alphabet(void)
{
	char alx;

	for (alx = 'a' ; alx <= 'z' ; alx++)
		_putchar(alx);
	_putchar('\n');
}
