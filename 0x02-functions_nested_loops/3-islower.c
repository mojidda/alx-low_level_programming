#include "main.h"

/**
 * _islower - function to print c lower case
 *
 * @c: function parameter
 *
 * Return: 1 if it is alower case
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
