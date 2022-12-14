#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always void
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			int rs = i * j;

			printf("%d", rs);
			if (j == 9)
				printf("\n");
			else
				printf(",\t");
		}
	}
}
