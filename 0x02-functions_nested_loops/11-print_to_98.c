#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry pont
 *
 * @n: input
*/

void print_to_98(int n)
{
	int X;

	if (n > 98)
		for (X = n; X > 98; X--)
			printf("%d, ", X);
	else
		for (X = n; X < 98; X++)
			printf("%d, ", X);
	printf("98\n");
}
