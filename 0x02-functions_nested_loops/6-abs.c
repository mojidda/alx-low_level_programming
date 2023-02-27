#include "main.h"

/**
 * _abs - function for absolute value
 *
 * @p: value of integer
 *
 * Return: always a
 */

int _abs(int p)
{
	if (p < 0)
		p = -(p);
	else if (p >= 0)
		p = p;
	return (p);
}
