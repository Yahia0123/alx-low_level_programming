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
	putchar(X + '0');
	X++;
	}
	putchar('\n');
	return (0);
}
