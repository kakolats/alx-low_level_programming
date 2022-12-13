#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
}
