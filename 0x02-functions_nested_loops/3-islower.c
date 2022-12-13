#include "main.h"

/**
 * _islower - Determinate if a char is in lowercase or not
 * @c: The character to evaluate
 * Return: Always int
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

}
