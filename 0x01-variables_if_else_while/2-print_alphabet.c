#include <stdio.h>

/**
 * main - a program that prints a to z
 *
 * Return: always 0 (success)
 */

int main(void)
{	
	char alx;

	for (alx = 'a' ; alx <= 'z' ; alx++)
		putchar(alx);
	putchar('\n');
	return (0);
}	
	
		
