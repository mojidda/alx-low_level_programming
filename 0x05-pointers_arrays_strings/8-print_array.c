#include "main.h"
/**
 * print_array - function that prints n elements
 * @a: array of integer
 * @n: followed by a new line
 * Return: a amd n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
