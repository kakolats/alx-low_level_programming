#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char chh;

	for (chh = 'a' ; chh <= 'z' ; chh++)
	{
		putchar (chh);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
