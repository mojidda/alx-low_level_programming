#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int alx;

	for (alx = 0 ; alx <10 ; alx++)
	{
		putchar(alx);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
