#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alx;

	for (alx = 'z' ; alx >= 'a' ; alx--)
		putchar(alx);
	putchar('\n');
	return (0);
}
