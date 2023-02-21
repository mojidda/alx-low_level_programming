#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int g;
	int h;
	int l;

	for (g = 0 ; g < 10 ; g++)
	{
		for (h = 1 ; h < 10 ; h++)
		{
			for (l = 2 ; l < 10 ; l++)
			{
				if (g < h && h < l)
				{
					putchar(g + '0');
					putchar(h + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('n');
	return (0);
}
