#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
}
