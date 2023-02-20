#include <stdio.h>
/**
 * main - A program that prints upper case
 *
 * Return: Always 0
 */

int main(void)
{
	char alx;

	for (alx = 'a' ; alx <= 'z' ; alx++)
		putchar(alx);
	for (alx = 'A' ; alx <= 'Z' ; alx++)
		putchar(alx);
	putchar('\n');
	return (0);
}
