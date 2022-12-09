#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:", (unsigned long)sizeof(a), "bytes(s)\n");
	printf("Size of an int:", (unsigned long)sizeof(b), "bytes(s)\n");
	printf("Size of a long int:", (unsigned long)sizeof(c), "bytes(s)\n");
	printf("Size of a long long int:", (unsigned long)sizeof(d), "bytes(s)\n";
	printf("Size of a float:", (unsigned long)sizeof(e), "bytes(s)");
	return (0);
}
