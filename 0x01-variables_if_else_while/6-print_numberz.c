#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;

	for (int numb = 0 ; numb < 10 ; numb++)
	{
		char ch = (char)(numb);
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
