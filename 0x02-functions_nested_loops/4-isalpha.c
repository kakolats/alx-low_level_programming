#include "main.h"

/*
 * _isalpha - Entry point
 * @c: The character to test
 *
 * Return: Always int (0 or 1)
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
