#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: followed by a new line
 * Return: print
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
