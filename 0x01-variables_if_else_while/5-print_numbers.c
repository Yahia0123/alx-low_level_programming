#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int X = 0;

	while (X < 10)
	{
		printf("%d", X);
		X++;
	}
	printf("\n");
	return (0);
}
