#include "main.h"

/**
 * print_sign - check the site of an int
 * @n: int to check
 *
 * Return: Always int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
