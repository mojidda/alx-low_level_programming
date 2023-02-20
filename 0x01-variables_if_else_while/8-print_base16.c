#include <stdio.h>
/**
 * main - Entry piont
 *
 * Return: always 0
 */
int main(void)
{
	int alx;
	char k;

	for (alx = 0 ; alx < 10 ; alx++)
		putchar(alx + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
